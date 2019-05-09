#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

void Daiamond(int num)
{
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (i < num / 2) {
				if (j >= num / 2 - i && j <= num / 2 + i) cout << "+";
				else cout << "*";
			}
			if (i == num / 2) {
				cout << "+";
			}
			if (i > num / 2) {
				int tmp = num - i - 1;
				if (j >= num / 2 - tmp && j <= num / 2 + tmp) cout << "+";
				else cout << "*";
			}
		}
		cout << endl;
	}
}

int main()
{
	int testcase, num;
	cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{

		cin >> num;
		Daiamond(num);
	}
	return 0;
}