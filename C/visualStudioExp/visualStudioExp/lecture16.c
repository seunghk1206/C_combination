#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int sum = 0;
	int i, j;
	int x, y;
	int** arr;
	printf("number of students : ");
	scanf("%d", &x);
	printf("number of subjects : ");
	scanf("%d", &y);
	/*
	arr = (int**)malloc(sizeof(int*) * x);
	for (i = 0; i < x; i++) {
		arr[i] = (int*)malloc(sizeof(int) * y);
	}
	*/
	//This is the same as below
	int(*arr)[x] = (int(*)[x])malloc(y*x*sizeof(int));
	for (i = 0; i < x; i++) {
		for (j = 0; j < x; j++) {
			printf("%dth student's %dth subject score : ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	for (j = 0; j < y; j++) {
		for (i = 0; i < x; i++) {
			sum += arr[i][j];
		}
		printf("%dth subjects' average : %d \n", j, sum / x);
		sum = 0;
	}
	for (i = 0; i < x; i++) {
		free(arr[i]);
	}
}
/*
int main(int argc, char** argv) {
	int SizeOfArray, i, sum = 0;
	int* arr;
	printf("How many students? : ");
	scanf("%d", &SizeOfArray);

	arr = (int*)malloc(sizeof(int) * SizeOfArray);
	for (i = 0; i < SizeOfArray; i++) {
		printf("%d th student's score? ", i);
		scanf("%d", (arr + (i)));
	}
	for (i = 0; i < SizeOfArray; i++) {
		sum += *(arr + (i));
	}
	printf("sum: %d \n", sum / SizeOfArray);
	free(arr);
}
*/