#include <iostream>
using namespace std;
void Triangle(int size);
int main(void)
{
	int testCase, num;
	cin >> testCase;
	for (int t = 0; t < testCase; t++) {
		cin >> num;
		Triangle(num);
	}
	return 0;
}
void Triangle(int size) {
	int col = 0;
	int tmp = 0;
	for (int i = 0; i < size; i++) {
		cout << i + 1 << " ";
		col = i + 1;
		for (int j = 0; j < i; j++) {
			col = col + tmp - 1;
			cout << col << " ";
			tmp--;
		}
		tmp = size;
		cout << endl;
	}
}