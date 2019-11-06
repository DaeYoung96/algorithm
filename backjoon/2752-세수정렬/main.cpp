// 백준 2752
// 세수정렬
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;
int main()
{
	int num;
	vector<int> v;
	for(int i=0; i<3; i++){
		cin >> num;
		v.push_back(num);
	}
	
	sort(v.begin(), v.end());

	for(int i=0; i<3; i++){
		cout << v[i] << " ";
	}
	return 0;
}