// 1978
// 소수 찾기
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
using namespace std;

bool sol(int num){
	if(num <= 1){
		return false;
	}
	for(int i=2;i<=sqrt(num); i++){
		if(num%i == 0){
			return false;
		}
	}
	return true;
}

int main()
{
	int m, n, cnt=0;
	vector<int> v;
	scanf("%d", &m);
	for(int i=0; i<m; i++){
		scanf("%d", &n);
		if(sol(n) == true){
			cnt++;
		}
	}
	printf("%d\n", cnt);
    return 0;
}