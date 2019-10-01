#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>

int partition(std::vector<int>& numbers, const int firstIndex, int lastIndex);
void quick_sort(std::vector<int>& numbers, const int firstIndex, int lastIndex, int tableSize);
void generateRandNbrs(std::vector<int>& numbers, int tableSize);
void show_table(std::vector<int> numbers, int tablesize);