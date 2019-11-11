// 10989
// 수 정렬하기 3
// 10000보다 같거나 작은수?
// 메모리 제한이 걸려있으니 그냥 sort하지 말고
// 숫자의 갯수만큼 세어서 풀자
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int n, num;
	int arr[10001] = {0, };
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &num);
		arr[num]++;
	}
	for(int i=0; i<10001; i++){
		if(arr[i] > 0){
			for(int j=0;j< arr[i]; j++){
				printf("%d\n", i);
			}
		}
	}
    return 0;
}