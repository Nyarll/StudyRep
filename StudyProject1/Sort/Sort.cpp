#include "Sort.h"

// <選択ソート>
void SORT::SelectionSort(int numbers[], int array_size)
{
	int min = 0, swap = 0;
	for (int i = 0; i < array_size - 1; i++)
	{
		min = i;

		for (int k = i + 1; k < array_size; k++)
		{
			if (numbers[k] < numbers[min])
			{
				min = k;
			}
		}

		swap = numbers[i];
		numbers[i] = numbers[min];
		numbers[min] = swap;
	}
}