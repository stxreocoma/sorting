template <typename T> void OptBubbleSort(T* arr, int n) {
	bool flg;
	for (int i = 0; i < n - 1; i++) {
		flg = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				T copy = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = copy;
				flg = true;
			}
		}
		if (!flg) {
			break;
		}
	}
}