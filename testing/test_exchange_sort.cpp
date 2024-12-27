#include <catch.hpp>

#include "exchange_sort.h"

TEST_CASE() {
	int arr[8] = { 5, 10, 18, 0, 2, 7, 11, 14 };
	int n = 8;


	ExchangeSort(arr, n);
	for (int i = 0; i < n - 1; i++) {
		REQUIRE(arr[i] <= arr[i + 1]);
	}

	int arr2[8] = { 1,2,3,4,5,6,7,8 };
	ExchangeSort(arr2, n);
	for (int i = 0; i < n - 1; i++) {
		REQUIRE(arr2[i] <= arr2[i + 1]);
	}

	double arr3[8] = { 3.4, 1.7, -0.99, 2.57, -100.993, 1011, 5, 90 };
	ExchangeSort(arr3, n);
	for (int i = 0; i < n - 1; i++) {
		REQUIRE(arr3[i] <= arr3[i + 1]);
	}
}