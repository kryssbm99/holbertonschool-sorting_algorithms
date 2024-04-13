#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *swap - swaps intergers and prints array
 *@a: first var int
 *@b: second var int
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 *lomuto_partition - lomuto scheme
 *@array: array to sort
 *@low: start
 *@high: ending scheme
 *
 *Return: index
 */
int lomuto_partition(int *array, int low, int high)
{
int pivot = array[high];
int i = low - 1;
int j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		print_array(array, high - low + 1);
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array + low, high - low + 1);
	return (i + 1);
}

/**
 *quicksort - performs a quicksort
 *@array: array to sort
 *@low: start
 *@high:ending
 *@size: of array
 *Return: VOID
 */
void quicksort(int *array, int low, int high)
{
	if (low < high)
	{
	int pi = lomuto_partition(array, low, high);

		quicksort(array, low, pi - 1);
		quicksort(array, pi + 1, high);
	}
}

/**
 *quick_sort - sorts array of intergers
 *@array: array to be sorted
 *@size: size of array
 *Return: VOID
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksor
