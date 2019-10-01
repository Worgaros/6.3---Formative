#include "main.h"

int main()
{
	user_choice();

	system("pause");
	return EXIT_SUCCESS;
}

void user_choice()
{
	int userInput = 0;
	int tableSize = 0;

	std::cout << "1- bubble sort\n2- insertion sort\n3- quick sort\n\nMake your choice: ";
	std::cin >> userInput;

	std::cout << "How many numbers do you want to sort ? ";
	std::cin >> tableSize;

	switch (userInput)
	{
		case 1:
		{
			bubble_sort(tableSize);
			break;
		}

		case 2:
		{
			insertion_sort(tableSize);
			break;
		}

		case 3:
		{
			const int firstIndex = 0;
			std::vector<int> numbers;
			generateRandNbrs(numbers, tableSize);
			quick_sort(numbers, firstIndex, tableSize - 1, tableSize);
			show_table(numbers, tableSize);
			break;
		}

		default:
		{
			std::cout << "This choice doesn't exist !\n\n";
			break;
		}
	}
}