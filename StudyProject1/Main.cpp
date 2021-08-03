#include <iostream>
#include <array>
#include <sstream>

#include "Sort/Sort.h"
#include "Message/Message.h"
#include "Random/Random.h"

template <typename T>
void ShuffleArray(T arr[], int size)
{
	Random random;
	for (int i = 0; i < size; i++)
	{
		int index = random.Range(0, size - 1);
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
	int max = 40;

	Random random;

	for (int i = 0; i < 20; i++)
	{
		std::cout << random.Range(max / 2, max) << ", ";
	}
	std::cout << std::endl;

	return 0;
}