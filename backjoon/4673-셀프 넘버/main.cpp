// 4673
// 셀프 넘버
// 그냥 일일이 찾는 방법말고는 없는건가?
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;

bool arr[10001] = {0, };

void self_number(int num){
	int sum = num;
	int tmp = num;
	if(num > 10000){
		return;
	}
	while(tmp != 0){
		sum = sum + tmp%10;
		tmp/=10;
	}
	arr[sum] = 1;
	self_number(sum);
}

int main()
{
	int n=1;
	arr[1] = 0;
	for(int i=1; i<10001; i++){
		if(arr[i] == 0){
			self_number(i);
			printf("%d\n", i);
		}
		// else{
		// 	printf("%d\n", i);
		// }
	}
    return 0;
}