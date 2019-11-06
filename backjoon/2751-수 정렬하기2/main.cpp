// 백준 2751
// 수 정렬하기2
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;
int main()
{
	int n, m;
	vector<int> v;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> m;
		v.push_back(m);
	}
	
	sort(v.begin(), v.end());

	for(int i=0; i<n; i++){
		cout << v[i] << " ";
	}
	return 0;
}