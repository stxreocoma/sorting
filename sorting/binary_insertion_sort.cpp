template <typename T> int binarySearch(T arr[], int item, int left, int right) {
	if (right <= left)
		return (item > arr[left]) ? (left + 1) : left;

	int middle = (left + right) / 2;
	if (item == arr[middle])
		return middle + 1;
	if (item > arr[middle])
		return binarySearch(arr, item, middle + 1, right);
	return binarySearch(arr, item, left, middle - 1);
}

template <typename T> void binary_insertion_sort(T* arr, const int n) {
	int i, loc, j, selected;
	for (i = 1; i < n; i++) {
		j = i - 1;
		selected = arr[i];
		loc = binarySearch(arr, selected, 0, j);
		while (j >= loc) {
			arr[j + 1] = arr[i];
			j--;
		}
		arr[j + 1] = selected;
	}
}