// 11726
// 2xn 타일링
// int자료형의 크기 때문에 배열에 넣어주기 전에 10007로 나눠주어야한다.
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int num, arr[1001];
	scanf("%d", &num);
	arr[0] = 1;
	arr[1] = 2;
	for(int i=2; i<=num; i++){
		arr[i] = (arr[i-1] + arr[i-2]) % 10007;
	}
	printf("%d\n", arr[num-1]);
    return 0;
}