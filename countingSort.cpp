#include <vector>

std::vector<int> countingSort(const std::vector<int>& array, int min, int max) {
	std::vector<int> values(max-min+1, 0);
	std::vector<int> sortedArray;

	for (int i = 0; i < array.size(); ++i) {
		values[array[i] - min] += 1;
	}

	for (int i = 0; i < values.size(); ++i) {
		if (values[i] != 0) {
			sortedArray.push_back(i);
		}
	}
	return sortedArray;
}
