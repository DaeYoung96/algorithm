// 백준 14753
// MultiMax
// 2개 곱하고 3개 곱하고 포문을 도는 방식으로 접근하는게 아니라
// 정렬 후 필요한 케이스만 뽑아서 총 4개의 테스트만 확인하자
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(){
	int testNumcase, n, num;
	scanf("%d", &testNumcase);
	for (int t = 0; t < testNumcase; t++) {
		scanf("%d", &n);
		long long MAX = -10000000000;
		vector<int> v;

		for(int i=0; i<n ;i++){
			scanf("%d", &num);
			v.push_back(num);
		}

		sort(v.begin(), v.end());

		// 큰거 2개
		if(v[n-1] * v[n-2] > MAX){
			MAX = v[n-1] * v[n-2];
		}
		// 큰거 3개
		if(v[n-1] * v[n-2] * v[n-3] > MAX){
			MAX = v[n-1] * v[n-2] * v[n-3];
		}

		// 작은거 2개(음수 * 음수)
		if(v[0] * v[1] > MAX){
			MAX = v[0] * v[1];
		}

		// 작은거 2개 / 큰거 1개 (음수 * 음수 * 큰수)
		if(v[0] * v[1] * v[n-1] > MAX){
			MAX = v[0] * v[1] * v[n-1];
		}
		printf("%d\n", MAX);
    }
	return 0;
}
