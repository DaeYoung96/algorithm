#include <iostream>
using namespace std;

void SignedArea(int cnt)
{
	int arr[200], area = 0, num;

	for (int i = 0; i < cnt * 2; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < cnt; i++) {
		if (i != cnt - 1)	area += (arr[i * 2] * arr[i * 2 + 3]) - (arr[i * 2 + 1] * arr[i * 2 + 2]);
		else area += (arr[i * 2] * arr[1]) - (arr[i * 2 + 1] * arr[0]);
	}

	if (area > 0) {
		num = 1;
	}
	if (area < 0) {
		num = -1;
		area *= -1;
	}
	cout << area << " " << num << endl;
}


int main()
{
	int testcase, cnt;
	cin >> testcase;
	for (int i = 0; i < testcase; i++) {
		cin >> cnt;
		SignedArea(cnt);
	}
}
