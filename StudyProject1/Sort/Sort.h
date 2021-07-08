#pragma once

#ifndef SORT_DEFINED
#define SORT_DEFINED

// Sort
namespace SORT
{
	// <スワップ / 入れ替え>
	// Swap(変数１, 変数２)
	template <typename T>
	void Swap(T& value1, T& value2)
	{
		T temp;

		temp = value1;
		value1 = value2;
		value2 = temp;
	}


	// <バブルソート>
	// BubbleSort(配列, 配列サイズ)
	void BubbleSort(int numbers[], int array_size);

	// <選択ソート>
	// SelectionSort(配列, 配列サイズ)
	void SelectionSort(int numbers[], int array_size);

	// <挿入ソート>
	// InsertionSort(配列, 配列サイズ)
	void InsertionSort(int numbers[], int array_size);

	// <シェルソート>
	// ShellSort(配列, 配列サイズ)
	void ShellSort(int numbers[], int array_size);

	// <クイックソート>
	// QuickSort(配列, 配列サイズ)
	void QuickSort(int numbers[], int array_size);

	// <クイックソート用関数>
	void _q_sort(int numbers[], int left, int right);
}

#endif // SORT