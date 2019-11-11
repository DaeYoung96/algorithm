// 10773
// 제로
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;

int main()
{
	int n, num, sum=0;
	stack<int> s;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &num);
		if(num != 0){
			s.push(num);
		}
		else if(num == 0){
			s.pop();
		}
	}
	while(!s.empty()){
		sum += s.top();
		s.pop();
	}
	printf("%d\n", sum);
    return 0;
}