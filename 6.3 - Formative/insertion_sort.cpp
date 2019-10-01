#include "insertion_sort.h"

void insertion_sort(int tableSize)
{
	int saveNbr = 0;
	int j = 0;
	std::vector<int> numbers;
	srand(time(NULL));

	for (int i = 0; i < tableSize; i++)
	{
		numbers.push_back(rand());
	}

	for (int i = 0; i < numbers.size(); i++)
	{
		saveNbr = numbers[i];
		j = i - 1;
		while (j >= 0 && numbers[j] > saveNbr)
		{
			numbers[j + 1] = numbers[j];
			j--;
		}
		numbers[j + 1] = saveNbr;
	}

	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << "\n";
	}
}