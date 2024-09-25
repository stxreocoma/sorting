template <typename T> void InsertionSort(T* arr, int n) {
	for (int i = 1; i < n; i++) {
		T key = arr[i];
		int j = i - 1;
		for (;j >= 0 && arr[j] > key; j--) {
			arr[j + 1] = arr[j];
		}

		arr[j + 1] = key;
	}
}