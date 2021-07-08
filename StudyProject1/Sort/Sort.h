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

	// <�}���\�[�g>
	// InsertionSort(�z��, �z��T�C�Y)
	void InsertionSort(int numbers[], int array_size);

	// <�V�F���\�[�g>
	// ShellSort(�z��, �z��T�C�Y)
	void ShellSort(int numbers[], int array_size);

	// <�N�C�b�N�\�[�g>
	// QuickSort(�z��, �z��T�C�Y)
	void QuickSort(int numbers[], int array_size);

	// <�N�C�b�N�\�[�g�p�֐�>
	void _q_sort(int numbers[], int left, int right);
}

#endif // SORT