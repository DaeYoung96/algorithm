// 9012
// 괄호
// ( )의 갯수만 세면은 틀린다. )의 갯수를 빼는 과정에서 갯수가 -가 된다면 이미 틀린문장
// -가 됐다가 총 cnt갯수가 맞는 예
// ())(
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
using namespace std;

bool sol(string str){
	if((str.size()%2) != 0){
		return 0;
	}
	int cnt=0;
	for(int i=0;i<str.size();i++){
		if(str[i] == '('){
			cnt++;
		}
		else if(str[i] == ')' && cnt > 0){
			cnt--;
		}
		else if(str[i] == ')' && cnt <=0){
			cnt--;
			break;
		}
	}
	if(cnt == 0){
		return 1;
	}
	else{
		return 0;
	}

}

int main()
{
	int testCase;
	scanf("%d", &testCase);
	for(int i=0;i<testCase;i++){
		string str;
		cin >> str;
		if(!sol(str)){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
    return 0;
}