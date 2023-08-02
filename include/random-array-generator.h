#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//**
//
//initialize srand(time(NULL))
//
//initialize int array_length
//through scanf procedure and array creation convention is 
//
//int* array_name = createRandomArray(array_length)
//

int* createRandomArray(int array_size);


int* createRandomArray(int array_size) {
    int* array = (int*)malloc(array_size * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    for (int i = 0; i < array_size; i++) {
        array[i] = rand() % 101;
    }

    return array;
}
