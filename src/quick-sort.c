#include <stdio.h>
#include "../include/random-array-generator.h"

int divide(int arr[], int start, int end);
void quicksort(int arr[], int start, int end);

int main(){
	srand(time(NULL));

	int array_length;
	printf("Enter array length:");
	scanf("%d",&array_length);

	int* arr = createRandomArray(array_length);

	printf("\n Unsorted array: ");
	printArray(arr, array_length);

	divide(arr, 0, array_length);
	quicksort(arr, 0, array_length);

	printf("\nSorted array: ");
	printArray(arr, array_length);

}

int divide(int arr[], int start, int end){
	int pivot = arr[end];
	int i = (start - 1);

	for(int j =start;j <= end - 1; j++){
		if(arr[j] < pivot){
			i++;
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	int temp = arr[i+1];
	arr[i+1] = arr[end];
	arr[end] = temp;

	return (i+1);
}

void quicksort(int arr[], int start, int end){
	if(start < end){
		int p = divide(arr, start, end);
		quicksort(arr, start, p - 1);
		quicksort(arr, p + 1, end);
	}
}
