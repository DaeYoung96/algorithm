// 백준 11070
// 피타고라스 기댓값
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    ifstream inStream("input.txt");
    int testNumcase, n ,m, a, b, p ,q;
    inStream >> testNumcase;
    for(int i=0; i<testNumcase; i++){
        inStream >> n >> m;
        long long arr1[1000] = {0, };  // win score
        long long arr2[1000] = {0, };  //lose score
        long long result[1000] = {0, };
        long long max = -1, min = 1000;
        for(int j=0; j<m; j++){
            inStream >> a >> b >> p >> q;
            arr1[a-1] += p;
            arr2[a-1] += q;
            arr1[b-1] += q;
            arr2[b-1] += p;
        }
        for(int j=0; j<n; j++){
            if(arr1[j] == 0 && arr2[j] == 0){
                result[j] = 0;
            }
            else{
                result[j] = arr1[j] * arr1[j] * 1000 / (arr1[j]*arr1[j] + arr2[j]*arr2[j]);
            }
            if(min>result[j]) min=result[j];
            if(max<result[j]) max=result[j];
        }
        cout << max << endl;
        cout << min << endl;
    }
    return 0;
}
