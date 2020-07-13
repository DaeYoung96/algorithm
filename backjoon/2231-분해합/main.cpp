// 분배합
// 2231
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;

int main()
{
	int n, num=0, sum;
	scanf("%d", &n);
	for(int i=1; i<n; i++){
		sum = 0;
		num=i;
		sum+=num;
		while(num!=0){
			sum+=num%10;
			num/=10;
		}
		if(sum == n){
			printf("%d", i);
			return 0;
		}
	}
	printf("0");

    return 0;
}