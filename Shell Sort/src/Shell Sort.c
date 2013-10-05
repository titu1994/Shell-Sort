/*
 ============================================================================
 Name        : Shell.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int *a = NULL, i;
	int n;

	void shellSort(int *a, int size);

	setbuf(stdout, NULL);

	printf("Enter number of elements : \n");
	scanf("%d",&n);

	a = (int*) calloc(n, sizeof(int));

	printf("Enter the elements\n");

	for(i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}

	shellSort(a, n);

	for(i = 0; i < n; i ++){
		printf("%d\t",a[i]);
	}

	return EXIT_SUCCESS;
}

void shellSort(int arr[], int size){
	int gap = 5, i, j;
	int temp;

	while(gap >= 1){

		for(i = gap; i < size; i++){

			temp = arr[i];

			for(j = i; j >= gap && arr[j - gap] > temp; j -= gap){

				arr[j] = arr[j - gap];

			}

			arr[j] = temp;
		}

		gap -= 2;

	}

}
