// 백준 10253
// Henry
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int gcd(int a, int b){
    return b ==0 ? a : gcd(b, a%b);
}
int main()
{
    ifstream inStream("input.txt");
    int testNumcase, a, b;
    inStream >> testNumcase;
    for(int i=0; i<testNumcase; i++){
        inStream >> a >> b;
        int x;
        while(a != 1){
            if(b%a == 0)  x=b/a;
            else  x=(b/a+1);
            a = a*x-b;
            b*=x;
            int g = gcd(a,b);
            a /= g;
            b /= g;
        }
        cout << b << endl;
    }
    return 0;
}
