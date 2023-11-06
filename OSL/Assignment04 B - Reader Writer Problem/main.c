#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>

sem_t writer;
pthread_mutex_t mutex;

int value = 0;
int readerCount = 0;

void *writerThread(void *arg) {
    long int num = (long int)arg;

    while (1) {
        sem_wait(&writer);
        pthread_mutex_lock(&mutex);
        printf("Writer %ld is in critical section\n", num);
        value++;
        sleep(rand() % 3);
        printf("Writer %ld wrote %d\n", num, value);
        pthread_mutex_unlock(&mutex);
        printf("Writer %ld is out of critical section\n", num);
        sem_post(&writer);
    }
}

void *readerThread(void *arg) {
    long int num = (long int)arg;

    while (1) {
        pthread_mutex_lock(&mutex);
        readerCount++;
        if (readerCount == 1) {
            sem_wait(&writer);
        }
        pthread_mutex_unlock(&mutex);

        printf("Reader %ld is in critical section\n", num);
        printf("Reader %ld read %d\n", num, value);
        sleep(rand() % 3);

        pthread_mutex_lock(&mutex);
        readerCount--;
        if (readerCount == 0) {
            sem_post(&writer);
        }
        pthread_mutex_unlock(&mutex);

        printf("Reader %ld is out of critical section\n", num);
    }
}

int main() {
    int noOfReaders, noOfWriters;

    printf("Enter the number of readers: ");
    scanf("%d", &noOfReaders);
    printf("Enter the number of writers: ");
    scanf("%d", &noOfWriters);
    printf("\n");

    sem_init(&writer, 0, 1);
    pthread_mutex_init(&mutex, NULL);

    pthread_t readers[noOfReaders], writers[noOfWriters];

    for (int i = 0; i < noOfReaders; i++) {
        pthread_create(&readers[i], NULL, readerThread, (void *)i);
    }

    for (int i = 0; i < noOfWriters; i++) {
        pthread_create(&writers[i], NULL, writerThread, (void *)i);
    }

    for (int i = 0; i < noOfReaders; i++) {
        pthread_join(readers[i], NULL);
    }

    for (int i = 0; i < noOfWriters; i++) {
        pthread_join(writers[i], NULL);
    }

    sem_destroy(&writer);
    pthread_mutex_destroy(&mutex);

    return 0;
}
