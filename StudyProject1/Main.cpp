#include <iostream>
#include <array>

#include "Sort/Sort.h"

// <配列の要素を表示>
template <typename T>
void ShowArray(T* arr, int size)
{
	// 順に表示
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

int main()
{
	// <配列>
	int numbers[10] = { 4,8,1,2,7, 6,9,3,5,10 };

	// <ソート前の配列を確認>
	ShowArray(numbers, 10);

	// <選択ソート>
	SORT::SelectionSort(numbers, 10);

	// <ソート後の配列を確認>
	ShowArray(numbers, 10);

	return 0;
}