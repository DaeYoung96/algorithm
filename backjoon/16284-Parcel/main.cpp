// 백준 16287
// Parcel
// 알고랩 Parcel
// k값에 가까운 쌍의 갯수를 구하자
#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstring>

using namespace std;

int arr[5001] = {0, };
bool chk[800000] = {0, };

bool parcel(int arr[5001], bool chk[800000], int w, int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i] + arr[j] > w){
				break;
			}
			if(chk[w - arr[i] - arr[j]]){
				return true;
			}
		}
		for(int j=0; j<i; j++){
			chk[arr[i] + arr[j]] = true;
		}
	}
	return false;
}

int main(){
	int testNumcase, w, n;
	scanf("%d", &testNumcase);
	for (int t = 0; t < testNumcase; t++) {
		scanf("%d %d", &w, &n);
		memset(chk, 0, sizeof(chk));
		for(int i=0; i<n; i++){
			scanf("%d", &arr[i]);
		}

		sort(arr, arr+n);

		if(parcel(arr, chk, w, n) == true){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
    }
	return 0;
}