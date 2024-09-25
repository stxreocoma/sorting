template <typename T> void BubbleSort(T* arr, int n) {
	for (int j = 0;j < n - 1; j++) {
		for (int i = 0; i < n - j - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				T copy = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = copy;
			}
		}
	}
}