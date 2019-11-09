// 1920
// 수 찾기
// 이진 탐색을 이용하는 방법으로 풀어야함
#include <algorithm>
#include <iostream>
#include <cstdio>
using namespace std;

int arr[100001];

void binarysearch(int len, int num) {
	int start = 0;
	int end = len - 1;
	int mid;

	while (end - start >= 0) {
		mid = (start + end) / 2;

		if (arr[mid] == num) {
			printf("1\n");
			return;
		}
		else if (arr[mid] > num) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	printf("0\n");
	return;
}

int main() {
	int n, m, num;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);

	scanf("%d", &m);

	for (int i = 0; i < m; i++) {
		scanf("%d", &num);
		binarysearch(n, num);
	}

	return 0;
}