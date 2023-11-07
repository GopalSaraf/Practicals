#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#include "const.h"

int main() {
    key_t key;
    int shmid;
    char *shm;

    // Create a key
    key = ftok(SHM_NAME, SHM_KEY);

    // Create a shared memory segment
    shmid = shmget(key, SHM_SIZE, 0666 | IPC_CREAT);

    // Attach the shared memory segment to the process
    shm = shmat(shmid, NULL, 0);

    printf("Message read from shared memory: %s\n", shm);

    // Detach the shared memory segment from the process
    shmdt(shm);

    // Delete the shared memory segment
    shmctl(shmid, IPC_RMID, NULL);

    return 0;
}