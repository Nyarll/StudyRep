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
}

#endif // SORT