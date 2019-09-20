// 백준 10250
// ACM-Hotel
#include <iostream>
#include <algorithm>
#include <cstring>
#include <fstream>
using namespace std;
int main()
{
     ifstream inStream("input.txt");
    int testNumcase, H, W, N;
    inStream >> testNumcase;
    for(int i=0;i<testNumcase; i++){
        inStream >> H >> W >> N;
        int cnt = 0;
        for(int j=1;j<=W;j++){
            for(int k=1;k<=H;k++){
                cnt++;
                // cout << "cnt : " << cnt << endl;
                // cout << j << " " <<  k << endl;
                if(cnt == N){
                    // k+1층 j+1호
                    cout << k*100+j << endl;
                    break;
                }
            }
            if(cnt == N)    break;
        }
    }
    return 0;
}
