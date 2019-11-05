// 백준 10870
// 피보나치 수 5

#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;
int main()
{
	int arr[21], num;
	arr[0] = 0;
	arr[1] = 1;
	cin >> num;
	for(int i=2; i<=num; i++){
		arr[i] = arr[i-1] + arr[i-2];
	}
	cout << arr[num] << endl;
	return 0;
}