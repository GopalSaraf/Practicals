#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t empty, full;
pthread_mutex_t mutex;

static int buffer[5];
static int index = 0;

void printBuffer() {
    printf("--------------------\n");
    printf("Buffer: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");
    printf("Index: %d\n", index);
    printf("\n");
    printf("--------------------\n");
}

void *producer(void *arg) {
    long int num = (long int)arg;

    // Producer should wait if buffer is full
    sem_wait(&empty);

    // Producer should wait if another producer is producing
    pthread_mutex_lock(&mutex);
    {
        buffer[index] = rand() % 100;
        printf("Producer %ld produced %d\n", num, buffer[index]);
        printBuffer();
        index++;
        sleep(1);
    }
    // Producer should unlock mutex
    pthread_mutex_unlock(&mutex);

    // Producer should increment value of full
    sem_post(&full);

    pthread_exit(NULL);
}

void *consumer(void *arg) {
    long int num = (long int)arg;

    // Consumer should wait if buffer is empty
    sem_wait(&full);

    // Consumer should wait if another consumer is consuming
    pthread_mutex_lock(&mutex);

    {
        index--;
        printf("Consumer %ld consumed %d\n", num, buffer[index]);
        buffer[index] = 0;
        printBuffer();
        sleep(1);
    }

    // Consumer should unlock mutex
    pthread_mutex_unlock(&mutex);

    // Consumer should increment value of empty
    sem_post(&empty);

    pthread_exit(NULL);
}

int main() {
    int noOfProducers, noOfConsumers;

    printf("Enter number of producers: ");
    scanf("%d", &noOfProducers);

    printf("Enter number of consumers: ");
    scanf("%d", &noOfConsumers);
    printf("\n");

    pthread_t producers[noOfProducers];
    pthread_t consumers[noOfConsumers];

    sem_init(&empty, 0, 5);
    sem_init(&full, 0, 0);
    pthread_mutex_init(&mutex, NULL);

    for (int i = 0; i < noOfProducers; i++) {
        pthread_create(&producers[i], NULL, producer, (void *)i);
    }

    for (int i = 0; i < noOfConsumers; i++) {
        pthread_create(&consumers[i], NULL, consumer, (void *)i);
    }

    for (int i = 0; i < noOfProducers; i++) {
        pthread_join(producers[i], NULL);
    }

    for (int i = 0; i < noOfConsumers; i++) {
        pthread_join(consumers[i], NULL);
    }

    sem_destroy(&empty);
    sem_destroy(&full);
    pthread_mutex_destroy(&mutex);

    return 0;
}