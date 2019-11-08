// 11399
// ATM
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, num, sum = 0;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < n; j++) {
			sum += v[j];
		}
		n--;
	}
	cout << sum << endl;

	return 0;
}