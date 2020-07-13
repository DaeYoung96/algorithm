// 부녀회장이 될테야
// 2775
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;

int main()
{
	int testCase, a, b, arr[15][15];
	scanf("%d", &testCase);
	for(int t=0; t<testCase; t++){
		scanf("%d %d", &a, &b);
		for(int i=0; i<=a; i++){
			for(int j=0; j<=b; j++){
				if(i==0){
					arr[i][j] = j+1;
				}
				else if(j==0){
					arr[i][j] = j+1;
				}
				else{
					arr[i][j] = arr[i-1][j] + arr[i][j-1];
				}
			}
		}
		// for(int i=0; i<=a; i++){
		// 	for(int j=0; j<=b; j++){
		// 		printf("%d ", arr[i][j]);
		// 	}
		// 	printf("\n");
		// }
		printf("%d\n", arr[a][b-1]);
	}
    return 0;
}