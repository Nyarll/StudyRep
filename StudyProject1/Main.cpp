#include <iostream>
#include <array>
#include <sstream>

#include "Sort/Sort.h"
#include "Message/Message.h"

template <typename T>
void ShuffleArray(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int index = rand() % size;
		SORT::Swap(arr[i], arr[index]);
	}
}

// <配列の要素を表示>
template <typename T>
void ShowArray(T arr[], int size)
{
	// 順に表示
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
	int num[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	ShuffleArray(num, 10);

	ShowArray(num, 10);

	SORT::ShellSort(num, 10);

	ShowArray(num, 10);

	return 0;
}