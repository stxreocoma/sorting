template <typename T> void SelectionSort(T* arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}

		T copy = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = copy;
	}
}