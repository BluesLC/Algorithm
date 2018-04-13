#include<iostream>

void quickSort(int data[], int low, int high) {
	if (low < high) {
		int left, right, partition;
		left = low;
		right = high;
		partition = data[low];
		while (left < right) {
			while (left < right && data[right] < partition)
				--right;
			data[left] = data[right];
			while (left < right && data[left] > partition)
				++left;
			data[right] = data[left];
		}
		data[left] = partition;
		quickSort(data, low, left - 1);
		quickSort(data, right + 1, high);
	}
	else return;
}


int main() {
	int a[] = { 56,54,98,5,11,57,59,99 };
	for (int i = 0; i < 8; ++i)
		std::cout << a[i] << " ";
	quickSort(a, 0, 7);
	std::cout << std::endl;
	for (int i = 0; i < 8; ++i)
		std::cout << a[i] << " ";
	system("pause");
	return 0;
}