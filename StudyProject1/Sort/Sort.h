#pragma once

#ifndef SORT_DEFINED
#define SORT_DEFINED

// Sort
namespace SORT
{
	// <�X���b�v / ����ւ�>
	// Swap(�ϐ��P, �ϐ��Q)
	template <typename T>
	void Swap(T& value1, T& value2)
	{
		T temp;

		temp = value1;
		value1 = value2;
		value2 = temp;
	}


	// <�o�u���\�[�g>
	// BubbleSort(�z��, �z��T�C�Y)
	void BubbleSort(int numbers[], int array_size);

	// <�I���\�[�g>
	// SelectionSort(�z��, �z��T�C�Y)
	void SelectionSort(int numbers[], int array_size);
}

#endif // SORT