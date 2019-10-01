#include "quick_sort.h"

void quick_sort(std::vector<int>& numbers, const int firstIndex, int lastIndex, int tableSize)
{
	if (firstIndex < lastIndex)
	{
		int partIndex = partition(numbers, firstIndex, lastIndex);
		quick_sort(numbers, firstIndex, partIndex - 1, tableSize);
		quick_sort(numbers, partIndex + 1, lastIndex, tableSize);
	}
}

int partition(std::vector<int>& numbers, const int firstIndex, int lastIndex)
{
	int pivot = numbers[lastIndex];
	long long int index = firstIndex - 1;

	for (int i = firstIndex; i <= lastIndex - 1; i++)
	{
		if (numbers[i] < pivot)
		{
			index++;
			std::swap(numbers[index], numbers[i]);
		}
	}
	std::swap(numbers[index + 1], numbers[lastIndex]);
	return (index + 1);
}

void generateRandNbrs(std::vector<int>& numbers, int tableSize)
{
	srand(time(NULL));
	
	for (int i = 0; i < tableSize; i++)
	{
		numbers.push_back(rand());
	}
}

void show_table(std::vector<int> numbers, int tablesize)
{
	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << "\n";
	}
}