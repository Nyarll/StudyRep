#include <iostream>
#include <array>

#include "Sort/Sort.h"
#include "Message/Message.h"

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
	Message message("Apple : %d", 12);

	std::cout << message.GetValue() << std::endl;

	return 0;
}