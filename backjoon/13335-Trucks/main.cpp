// 백준 13335
// 트럭
// queue를 사용하는 문제
// 전진하는 방법으로는 이상한 체크를 두지 말고 0를 푸시해주자
#include <iostream>
#include <algorithm>
#include <queue>
#include <fstream>

using namespace std;

int main(){
	ifstream inStream("input.txt");
	int testNumcase, n, w, L, truck;
	inStream >> testNumcase;
	for (int t = 0; t < testNumcase; t++) {
		queue<int> q;
		int sum = 0, cnt = 0, move = 0;
		inStream >> n >> w >> L;
		
		while(n--){
			inStream >> truck;
			while(true){
				move++;
				if(q.size() == w){
					sum -= q.front();
					q.pop();
				}
				if(sum+truck <= L){
					sum += truck;
					q.push(truck);
					break;
				}
				else{
					q.push(0);
				}
			}
		}

		printf("%d\n", move+w);
    }
	return 0;
}
