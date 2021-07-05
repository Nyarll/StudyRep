#include <iostream>
#include <array>

#include "Sort/Sort.h"

// <�z��̗v�f��\��>
template <typename T>
void ShowArray(T* arr, int size)
{
	// ���ɕ\��
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

int main()
{
	// <�z��>
	int numbers[10] = { 4,8,1,2,7, 6,9,3,5,10 };

	// <�\�[�g�O�̔z����m�F>
	ShowArray(numbers, 10);

	// <�I���\�[�g>
	SORT::SelectionSort(numbers, 10);

	// <�\�[�g��̔z����m�F>
	ShowArray(numbers, 10);

	return 0;
}