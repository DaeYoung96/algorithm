// 백준 9024
// 두 수의 합
// 알고랩 Two Numbers
// k값에 가까운 쌍의 갯수를 구하자
#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>

using namespace std;

int v[1000000] = {0, };

int main(){
	int testNumcase, n, k, num;
	scanf("%d", &testNumcase);
	for (int t = 0; t < testNumcase; t++) {
		// vector<int> v;
		scanf("%d %d", &n, &k);

		for(int i=0; i<n; i++){
			scanf("%d", &v[i]);
		}

		sort(v, v+n);

		int MIN = 100000000, cnt = 0;

		for(int i=0; i<n-1; i++){
			int l_idx = i+1;
			int r_idx = n-1;
			while(l_idx <= r_idx){
				int mid = (l_idx + r_idx) / 2;
				if(abs(k - v[i] - v[mid]) < MIN){
					MIN = abs(k - v[i] - v[mid]);
					cnt = 1;
				}
				else if(abs(k - v[i] - v[mid]) == MIN){
					cnt++;
				}

				if(k - v[i] - v[mid] > 0){
					l_idx = mid + 1;
				}
				else if(k - v[i] - v[mid] == 0){
					break;
				}
				else{
					r_idx = mid - 1;
				}
			}
		}
		printf("%d\n", cnt);
    }
	return 0;
}