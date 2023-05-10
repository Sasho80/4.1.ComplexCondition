#include <iostream>
using namespace std;
int main() {
	double x1, x2, y1, y2, x, y;
	cin >> x1 >> y1
		>> x2 >> y2
		>> x >> y;
	bool onLeftSide = (x == x1) && (y >= y1) && (y <= y2);
	bool onRightSide = (x == x2) && (y >= y1) && (y <= y2);
	bool onUpSide = (y == y1) && (x >= x1) && (x <= x2);
	bool onDownSide = (y == y2) && (x >= x1) && (x <= x2);
	if (onLeftSide || onRightSide || onUpSide || onDownSide) {
		cout << "Border" << endl;
	}else{
		cout << "Inside / Outside" << endl;
	}
	return 0;
}