template <typename T> int partition(T* array, int low, int high) {
	int pivot = array[high];
	int i = low - 1;
	for (int j = low; j <= high - 1; j++) {
		if (array[j] < pivot) {
			i++;
			int tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	}

	int tmp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = tmp;
	return i + 1;
}

template <typename T> void quickSort(T* array, int low, int high) {
	if (low < high) {
		int pi = partition(array, low, high);

		quickSort(array, low, pi - 1);
		quickSort(array, pi + 1, high);
	}
}