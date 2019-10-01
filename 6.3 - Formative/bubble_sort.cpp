#include "bubble_sort.h"

void bubble_sort(int tableSize)
{
	std::vector<int> numbers;
	srand(time(NULL));

	for (int i = 0; i < tableSize; i++)
	{
		numbers.push_back(rand());
	}

	for (int i = 0; i < numbers.size() - 1; ++i)
	{
		for (int j = 0; j < numbers.size() - i - 1; ++j)
		{
			if (numbers[j] > numbers[j + 1])
			{
				std::swap(numbers[j], numbers[j + 1]);
			}
		}
	}

	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << "\n";
	}
}