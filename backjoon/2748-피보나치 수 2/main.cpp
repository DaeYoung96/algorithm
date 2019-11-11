// 2748
// 피보나치 수 2
// 자료형.. %d말고 long long 는 %lld...
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int num;
	long long arr[91];
	scanf("%d", &num);
	arr[0] = 0;
	arr[1] = 1;
	for(int i=2; i<=num; i++){
		arr[i] = arr[i-1] + arr[i-2];
	}
	printf("%lld\n", arr[num]);
    return 0;
}