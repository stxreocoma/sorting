template <typename T> void shellSort(T* array, const int n) {
	for (int gap = n / 2; gap > 0; gap /= 2) {
		for (int i = gap; i < n; i++) {
			int tmp = array[i];
			int j;
			for (j = i; j >= gap && array[j - gap] > tmp; j -= gap) {
				array[j] = array[j - gap];
			}
			array[j] = tmp;
		}
	}
}