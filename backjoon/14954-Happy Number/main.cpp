// 백준 14954
// happy number
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
vector<int> v;
bool happy_number(int num){
    int next_num = 0;
    if(num == 1){
        return 1;
    }

    
    for(int i=0; i<v.size(); i++){
        if(num == v[i]){
            return 0;
        }
    }

    v.push_back(num);
    
    while(num != 0){
        next_num += (num%10) * (num%10);
        num /= 10;
    }
    happy_number(next_num);
}
int main()
{
    ifstream inStream("input.txt");
    int testNumcase, num;
    inStream >> testNumcase;
    for(int i=0; i<testNumcase; i++){
        inStream >> num;
        if(happy_number(num) == 1){
            cout << "HAPPY" << endl;
        }
        else{
            cout << "UNHAPPY" << endl;
        }
        v.clear();
    }
    return 0;
}
