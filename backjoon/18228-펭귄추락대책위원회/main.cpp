// 18228
// 펭귄추락대책위원회
// 그냥 일일이 찾는 방법말고는 없는건가?
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;

int main()
{
	int n, arr;
	bool flag = 0;
	vector<int> v1;
	vector<int> v2;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr);
		if(arr == -1){
			flag = 1;
			continue;
		}
		
		if(flag == 0){
			v1.push_back(arr);
		}
		else{
			v2.push_back(arr);
		}
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	
	printf("%d", v1[0]+v2[0]);
    return 0;
}