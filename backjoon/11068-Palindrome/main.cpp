// 백준 11068
// 회문인 수
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
bool palindrom(int num){
	vector<int> v;
	int tmp;
	bool flag;
	for(int i=2; i<=64; i++){
		tmp = num;
		while(tmp!=0){
			v.push_back(tmp%i);
			tmp/=i;
		}
		for(int j=0; j<v.size(); j++){
			if(v[j] != v[v.size()-j-1]){
				flag = 0;
				break;
			}
			else{
				flag = 1;
			}
		}
		if(flag == 1){
			return 1;
		}
		v.clear();
	}
	return 0;
}
int main()
{
	ifstream inStream("input.txt");
	int testNumcase, num;
	inStream >> testNumcase;
	for (int i = 0; i < testNumcase; i++) {
		inStream >> num;
		cout << palindrom(num) << endl;
    }
	return 0;
}
