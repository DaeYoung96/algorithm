// 백준 10448
// 유레카 이론
#include <iostream>
#include <fstream>
using namespace std;
bool check_eureka(int arr[], int num, int cnt){
   for(int a=0;a<cnt;a++){
            for(int b=0;b<cnt;b++){
                for(int c=0;c<cnt;c++){
                    if(arr[a] + arr[b] + arr[c] == num) {
                        return 1;
                    }
                }
            }
        }
        return 0;
}
int main()
{
    ifstream inStream("input.txt");
    int testNumcase, num;
    inStream >> testNumcase;
    for(int i=0;i<testNumcase; i++){
        inStream >> num;
        int cnt = 0, arr[1000] = {0, };
        while(true){
            if((cnt+1)*(cnt+2)/2 >= num) break;
            arr[cnt] = (cnt+1)*(cnt+2)/2;
            cnt++;
        }
        cout << check_eureka(arr, num, cnt) << endl;
    }
    return 0;
}
