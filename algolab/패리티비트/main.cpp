#include <iostream>
#include <cmath>
using namespace std;

void parity(int num)
{
	int arr[30] = { 0, }, cnt = 0, chk = 0;
	unsigned int sum = 0;
	while (num != 0) {
		if (num % 2 == 0) {
			arr[cnt] = 0;
			num /= 2;
			cnt++;
		}
		else {
			arr[cnt] = 1;
			num /= 2;
			cnt++;
			chk++;
		}
	}

	if (chk % 2 != 0)	sum += pow(2, 31);

	for (int i = 0; i <= 30; i++) {
		if (arr[i] == 1) {
			sum += pow(2, i);
		}
	}

	cout << sum << endl;
}


int main()
{
	int testcase, num;
	cin >> testcase;
	for (int i = 0; i < testcase; i++) {
		cin >> num;
		parity(num);
	}
}
