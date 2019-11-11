// 1436
// 영화감독 숌
// n번째 종말의 숫자 666이 들어간 수
// 그냥 while문 돌려서 노가다로 찾으면 된다요
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;

bool number_of_ending(int num){
	while(true){
		if(num < 100){
			break;
		}
		if(num%1000 == 666){
			return true;
		}
		else{
			num/=10;
		}
	}
	return false;
}

int main()
{
	int n, cnt = 0;
	scanf("%d", &n);
	int i = 666;
	
	while(true){
		if(number_of_ending(i)){
			cnt++;
		}

		if(n == cnt){
			break;
		}
		i++;
	}
	printf("%d\n", i);
    return 0;
}