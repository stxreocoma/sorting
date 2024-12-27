#include <catch.hpp>
#include "quick_sort.h"

TEST_CASE() {
	int array[5] = { 2, 6, 5, 3, 9 };
	int n = 5;
	quickSort(array, 0, n - 1);
	for (int i = 0; i < n - 1; i++) {
		REQUIRE(array[i] <= array[i + 1]);
	}
}

TEST_CASE() {
	int array[5] = {};
	int n = 5;
	quickSort(array, 0, n - 1);
	for (int i = 0; i < n - 1; i++) {
		REQUIRE(array[i] <= array[i + 1]);
	}
}

TEST_CASE() {
	double array[5] = { 2.3, 5, -1, 8, -20 };
	int n = 5;
	quickSort(array, 0, n - 1);
	for (int i = 0; i < n - 1; i++) {
		REQUIRE(array[i] <= array[i + 1]);
	}
}