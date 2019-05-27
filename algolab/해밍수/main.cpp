#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int MAX = 398580750;
void Hamming(int num)
{
	vector<int> arr;
	for (int k = 1;; k *= 2) {
		for (int l = k;; l *= 3) {
			for (int m = l;; m *= 5) {
				arr.push_back(m);
				if (m > MAX / 5) break;
			}
			if (l > MAX / 3) break;
		}
		if (k > MAX / 2) break;
	}

	sort(arr.begin(), arr.end());
	
	cout << arr[num - 1] << endl;
}

int main()
{
	int testcase, num;
	cin >> testcase;
	for (int i = 0; i < testcase; i++) {
		cin >> num;
		Hamming(num);
	}
}
