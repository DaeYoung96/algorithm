// 백준 2869
// 달팽이는 올라가고 싶다
// 시간제한이 걸려있으니 조건을 잘 생각하자

#include<iostream>
using namespace std;

int main() {
	int a, b, v, cnt;
	cin >> a >> b >> v;
	if ((v - a) % (a-b) == 0) {
		cnt = (v - a) / (a-b);
	}
	else {
		cnt = (v - a) / (a-b) + 1;
	}
    cnt++;
	cout << cnt << endl;

	return 0;
}