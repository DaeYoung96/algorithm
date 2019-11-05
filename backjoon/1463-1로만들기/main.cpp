// 백준 1463
// 1로 만들기
// dp를 이용해서 풀자
#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;
int main()
{
	int n, cnt=0;
	cin >> n;
	unsigned int arr[1000000];
	arr[1] = 0;
	for(int i=2;i<=n;i++){
		arr[i] = arr[i-1] + 1;
		if(i%2 == 0){
			arr[i] = min(arr[i], arr[i/2]+1);
		}
		if(i%3 == 0){
			arr[i] = min(arr[i], arr[i/3]+1);
		}
	}

	cout << arr[n] << endl;
	return 0;
}