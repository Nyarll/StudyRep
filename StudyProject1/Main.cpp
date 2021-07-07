#include <iostream>
#include <array>
#include <sstream>

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

void print() {}

template <typename Head, typename... Tail>
void print(Head&& head, Tail&&... tail)
{
	std::cout << head << " ";
	print(std::forward<Tail>(tail)...);
}

template <typename Head, typename... Tail>
std::string GetString(Head&& head, Tail&&... tail)
{
	std::ostringstream oss;
	oss << head << GetString(std::forward<Tail>(tail)...);

	return oss.str();
}

int main()
{
	
	std::string str = GetString("�̗́F", 1200);

	std::cout << str;

	return 0;
}