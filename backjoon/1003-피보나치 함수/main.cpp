// 1003
// 피보나치 함수

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
	int testCase, num, arr[41][2];
    cin >> testCase;
	for(int t=0;t<testCase;t++){
		cin >> num;
		arr[0][0] = 1;
		arr[0][1] = 0;
		arr[1][0] = 0;
		arr[1][1] = 1;
		for(int i=2; i<=num; i++){
			arr[i][0] = arr[i-1][0] + arr[i-2][0];
			arr[i][1] = arr[i-1][1] + arr[i-2][1];
			
		}
		cout << arr[num][0] << " " << arr[num][1] << endl;
	}
    return 0;
}