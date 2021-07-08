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

void SORT::InsertionSort(int numbers[], int array_size)
{
	for (int i = 0; i < array_size; i++)
	{
		int w = i;	// <交換要素のためのインデックス>

		// <整列済みであれば処理しない>
		while ((w > 0) && (numbers[w - 1] > numbers[w]))
		{
			Swap(numbers[w - 1], numbers[w]);
			w--;
		}
	}
}

void SORT::ShellSort(int numbers[], int array_size)
{
	int increment = 4;

	while (increment > 0)
	{
		for (int i = 0; i < array_size; i++)
		{
			int k = i;
			int temp = numbers[i];

			while ((k >= increment) && (numbers[k - increment] > temp))
			{
				numbers[k] = numbers[k - increment];
				k = k - increment;
			}

			numbers[k] = temp;
		}

		if (increment / 2 != 0)
			increment = increment / 2;
		else if(increment == 1)
			increment = 0;
		else
			increment = 1;
	}
}

void SORT::QuickSort(int numbers[], int array_size)
{
	_q_sort(numbers, 0, array_size - 1);
}

void SORT::_q_sort(int numbers[], int left, int right)
{
	int pivot = numbers[left];
	int left_hold = left;
	int right_hold = right;

	while (left < right)
	{
		while ((numbers[right] >= pivot) && (left < right))
			right--;

		if (left != right)
		{
			numbers[left] = numbers[right];
			left++;
		}

		while ((numbers[left] <= pivot) && (left < right))
			left++;

		if (left != right)
		{
			numbers[right] = numbers[left];
			right--;
		}
	}

	numbers[left] = pivot;
	pivot = left;
	left = left_hold;
	right = right_hold;

	if (left < pivot)
		_q_sort(numbers, left, pivot - 1);
	if (right < pivot)
		_q_sort(numbers, pivot + 1, right);
}
