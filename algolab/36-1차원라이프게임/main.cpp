#include <iostream>
using namespace std;
void LifeGame(int arr[], int size);
int main(void)
{
	int testCase;
	cin >> testCase;
	for (int t = 0; t < testCase; t++) {
		int n, k, num;
		cin >> n >> k;
		int *arr = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> num;
			arr[i] = num;
		}
		for (int i = 0; i < k; i++) {
			LifeGame(arr, n);
		}
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
		delete[] arr;
	}
	return 0;
}
void LifeGame(int arr[], int size) {
	int *tmp_arr = new int[size];
	for (int i = 0; i < size; i++) {
		if (i == 0) {
			if (arr[i + 1] < 3 || arr[i + 1] > 7) {
				tmp_arr[i] = arr[i] - 1;
				continue;
			}
			if (arr[i + 1] == 3) {
				tmp_arr[i] = arr[i];
				continue;
			}
			if (arr[i + 1] >= 4 && arr[i + 1] <= 7) {
				tmp_arr[i] = arr[i] + 1;
				continue;
			}
		}
		if (i == size - 1) {
			if (arr[i - 1] < 3 || arr[i - 1] > 7) {
				tmp_arr[i] = arr[i] - 1;
				continue;
			}
			if (arr[i - 1] == 3) {
				tmp_arr[i] = arr[i];
				continue;
			}
			if (arr[i - 1] >= 4 && arr[i - 1] <= 7) {
				tmp_arr[i] = arr[i] + 1;
				continue;
			}
		}
		else {
			if (arr[i - 1] + arr[i + 1] < 3 || arr[i - 1] + arr[i + 1] > 7) {
				tmp_arr[i] = arr[i] - 1;
				continue;
			}
			if (arr[i - 1] + arr[i + 1] == 3) {
				tmp_arr[i] = arr[i];
				continue;
			}
			if (arr[i - 1] + arr[i + 1] >= 4 && arr[i - 1] + arr[i + 1] <= 7) {
				tmp_arr[i] = arr[i] + 1;
				continue;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		if (tmp_arr[i] == 10) {
			arr[i] = tmp_arr[i] - 1;
		}
		else if (tmp_arr[i] == -1) {
			arr[i] = tmp_arr[i] + 1;
		}
		else {
			arr[i] = tmp_arr[i];
		}
	}
}