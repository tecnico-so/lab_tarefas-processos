/*
 * thread.c - simple example demonstrating the creation of threads
 */

#include <stdio.h>
#include <pthread.h>

/* global value */
int g_value = 0;

void* thr_func(void*) {
    g_value = 1;
    return NULL;
}

int main() {
    pthread_t tid;
    if (pthread_create(&tid, NULL, thr_func, NULL) != 0) {
        fprintf(stderr, "error creating thread.\n");
        return -1;
    }
    
    g_value = 2;
    
    if(pthread_join(tid, NULL) != 0) {
        fprintf(stderr, "error joining thred.\n");
        return -1;
    }

    printf("value = %d\n", g_value);
    return 0;
}
