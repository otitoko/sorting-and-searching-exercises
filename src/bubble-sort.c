#include <stdio.h>
#include "../include/random-array-generator.h"

int main(){
	
	srand(time(NULL));


	int array_length;

	printf("Input array length: ");
	scanf("%d", &array_length);
	int* arr = createRandomArray(array_length);

	printf("Unsorted array: [");

	for(int i = 0;i < array_length - 1; i++){
		printf("%d, ",arr[i]);
	}	
	printf("%d]\n",arr[array_length - 1]);




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
	printf("Sorted array: [");
	for(int i = 0; i < array_length - 1; i++){
		printf("%d, ",arr[i]);
	}
	printf("%d]",arr[array_length - 1]);

	free(arr);
	return 0;
}
