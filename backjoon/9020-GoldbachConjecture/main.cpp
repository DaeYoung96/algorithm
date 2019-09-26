// 백준 9020
// 골드바흐의 추측
#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	ifstream inStream("input.txt");
	int testNumcase, num;
	inStream >> testNumcase;
	for (int i = 0; i < testNumcase; i++) {
		inStream >> num;
		int num1, num2, idx = 0, arr[10000];
		int MIN = 10000;
		// num이하의 소수를 구하는 for문
		for(int j=2; j<num; j++){
			int cnt = 0;
			for(int k=2; k<j; k++){
				if(j % k == 0){
					cnt++;
				}
			}
			if(cnt == 0){
				arr[idx++] = j;
			}
		}
		// 더하기를 구하는 함수
		for(int j=0; j<idx; j++){
			for(int k=0; k<idx; k++){
				if(arr[j]+arr[k] == num){
					if(MIN > abs(arr[j]-arr[k])){
						num1 = arr[j];
						num2=  arr[k];
						MIN = abs(arr[j]-arr[k]);
					}
				}
			}
		}

		cout << num1 << " " << num2 << endl;
    }
	return 0;
}
