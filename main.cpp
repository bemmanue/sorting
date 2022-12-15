#include <iostream>
#include <vector>

int main() {
	std::vector<int> array{1, 4, 7, 2, 3, 9, 8, 6};

//	std::vector<int> sorted = mergeSort(array);
	std::vector<int> sorted = countingSort(array, 0, 9);

	for (int i = 0; i < sorted.size(); ++i) {
		std::cout << sorted[i] << std::endl;
	}

	return 0;
}
