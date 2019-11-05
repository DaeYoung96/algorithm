// 백준 2750
// 수 정렬하기
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;
int main()
{
	vector<int> v;
	int n, num;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for(int i=0; i<n; i++){
		cout << v[i] << endl;
	}
}