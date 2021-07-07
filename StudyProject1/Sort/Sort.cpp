#include "Sort.h"

// <バブルソート>
void SORT::BubbleSort(int numbers[], int array_size)
{
	for (int i = 0; i < (array_size - 1); i++)
	{
		for (int k = (array_size - 1); k > i; k--)
		{
			if (numbers[k - 1] > numbers[k])
			{
				Swap(numbers[k - 1], numbers[k]);
			}
		}
	}
}

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
		Swap(numbers[i], numbers[min]);
	}
}