// Copyright (C) Cismaru Diana-Iuliana (311CA - 2021/2022)
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Macro that swaps the values of two variables
#define swap(a, b) a ^= b ^= a ^= b

// Function that sorts an array using Bubble Sort Algorithm
static void sort(int n, int *arr)
{
	// TODO: add bubble sort algorithm here
	bool ok;
	do {
		// Assume that the array is sorted
		ok = true;

		for (int i = 0; i < n - 1; i++) {
			// Check if two elements in a row are sorted
			if (arr[i] > arr[i + 1]) {
				// Array is not sorted
				ok = false;
				swap(arr[i], arr[i + 1]);
			}
		}
	} while (ok == 0);
}

// Function that prints an array
void printArray(int n, int *arr) {
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);

	int *arr = malloc(n * sizeof(int));
	printf("Enter %d integers: ", n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	sort(n, arr);
	printf("Sorted array is: ");
	printArray(n, arr);
	free(arr);
	return 0;
}