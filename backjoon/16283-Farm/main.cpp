// 백준 16283
// Farm
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ifstream inStream("input.txt");
	int testNumcase, a, b, n, w, sol1, sol2;
	inStream >> testNumcase;
	for (int i = 0; i < testNumcase; i++) {
		inStream >> a >> b >> n >> w;
		int cnt = 0;
		for(int j=1; j<n; j++){
			if(j*a + (n-j)*b == w){
				cnt++;
				sol1 = j;
				sol2 = n-j;
			}
		}
		if(cnt == 1){
			cout << sol1 << " " << sol2 << endl;
		}
		else{
			cout << "-1" << endl;
		}
    }
	return 0;
}
