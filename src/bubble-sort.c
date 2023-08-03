#include <stdio.h>
#include "../include/random-array-generator.h"

int main(){
	
	srand(time(NULL));


	int array_length;

	printf("Input array length: ");
	scanf("%d", &array_length);
	int* arr = createRandomArray(array_length);

	printf("\nUnsorted array: ");

	printArray(arr, array_length);




	for(int i = 0; i < array_length -1; i++){
		for(int j = 0; j < array_length - i - 1; j++){
			int value;

			if(arr[j] > arr[j+1]){
				value = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = value;
			}
		}
	}
	printf("\nSorted array: ");
	printArray(arr, array_length);

	free(arr);
	return 0;
}
