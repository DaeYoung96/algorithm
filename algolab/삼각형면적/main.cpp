#include <iostream>
using namespace std;

void SignedArea()
{
	int ax, ay, bx, by, cx, cy;
	int area, num;
	cin >> ax >> ay >> bx >> by >> cx >> cy;
	area = ((bx - ax) * (cy - ay) - (cx - ax) * (by - ay));
	if (area > 0) {
		num = 1;
	}
	if (area < 0) {
		num = -1;
		area *= -1;
	}
	if (area == 0) {
		num = 0;
	}
	cout << area << " " << num << endl;
}


int main()
{
	int testcase, num;
	cin >> testcase;
	for (int i = 0; i < testcase; i++) {
		SignedArea();
	}
}
