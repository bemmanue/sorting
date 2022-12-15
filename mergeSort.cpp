#include <vector>

std::vector<int> mergeSort(std::vector<int> array) {
	if (array.size() < 2) {
		return array;
	}

	int m = (int)array.size() / 2;
	std::vector<int> L(array.begin(), array.begin() + m);
	std::vector<int> R(array.begin() + m, array.end());

	L = mergeSort(L);
	R = mergeSort(R);

	std::vector<int> sortedArray;

	int i = 0;
	int j = 0;
	while (i < L.size() && j < R.size()) {
		if (L[i] < R[j]) {
			sortedArray.push_back(L[i++]);
		} else {
			sortedArray.push_back(R[j++]);
		}
	}

	while (i < L.size()) {
		sortedArray.push_back(L[i++]);
	}

	while (j < R.size()) {
		sortedArray.push_back(R[j++]);
	}

	return sortedArray;
}
