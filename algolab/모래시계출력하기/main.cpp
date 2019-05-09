#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

void SandClock(int num)
{
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (i < num / 2) {
				//Â¦¼öÀÏ¶§ 0, 2, 4...
				if (i % 2 == 0) {
					if (j < i || j >= num - i) cout << "-";
					else if (j % 2 != 0) cout << "+";
					else if (j % 2 == 0) cout << "*";
				}
				//È¦¼öÀÏ¶§ 1, 3, 5...
				else {
					if (j < i || j >= num - i) cout << "-";
					else if (j % 2 != 0) cout << "*";
					else if (j % 2 == 0) cout << "+";
				}
			}
			if (i == num / 2) {
				if (j == num / 2) cout << "*";
				else cout << "-";
			}
			if (i > num / 2) {
				int tmp = num - i - 1;
				//Â¦¼öÀÏ¶§ 0, 2, 4...
				if (i % 2 == 0) {
					if (j < tmp || j >= num - tmp) cout << "-";
					else if (j % 2 != 0) cout << "+";
					else if (j % 2 == 0) cout << "*";
				}
				//È¦¼öÀÏ¶§ 1, 3, 5...
				else {
					if (j < tmp || j >= num - tmp) cout << "-";
					else if (j % 2 != 0) cout << "*";
					else if (j % 2 == 0) cout << "+";
				}
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
		SandClock(num);
	}
	return 0;
}