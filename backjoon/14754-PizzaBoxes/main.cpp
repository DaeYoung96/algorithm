// 백준 14754
// Pizza Boxes
// i j에 대한 맥스값을 각각 구한다.
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <cstring>


using namespace std;

#define N 1000

int box[N][N];
bool check[N][N];

int main()
{
	ifstream inStream("input.txt");
	int testNumcase, n, m, num, val_j, val_k;
	inStream >> testNumcase;
	for (int i = 0; i < testNumcase; i++) {
		memset(box, 0, sizeof(box));
		memset(check, 0, sizeof(check));
		unsigned long long sum = 0;
		int MAX = -1;
		inStream >> n >> m;

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				inStream >> num;
				box[j][k] = num;
			}
		}

		//side 값의 큰값
		for (int j = 0; j < n; j++) {
			MAX = -1;
			for (int k = 0; k < m; k++) {
				if (box[j][k] > MAX) {
					MAX = box[j][k];
					val_j = j;
					val_k = k;
				}
			}
			check[val_j][val_k] = 1;
		}

		//front 값의 큰값
		for (int j = 0; j < m; j++) {
			MAX = -1;
			for (int k = 0; k < n; k++) {
				if (box[k][j] > MAX) {
					MAX = box[k][j];
					val_j = k;
					val_k = j;
				}
			}
			check[val_j][val_k] = 1;
		}

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				if (check[j][k] != 1) {
					sum += box[j][k];
					check[j][k] = 0;
					box[j][k] = 0;
				}
			}
		}
		cout << sum << endl;
	}
	return 0;
}