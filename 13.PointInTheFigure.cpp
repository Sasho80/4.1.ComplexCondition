#include <iostream>
using namespace std;
int main(){
int h, x, y;
cin>>h;
cin >> x;
cin >> y;
bool outRectangle1=(y>h)&&(x<h)||(y>2*h)&&(x>2*h)||(x==h)&&(y>3*h);
bool outRectangle2= (y > h)&&(x < h)||(y > 2 * h)&&(x > 2 * h)
||(y>4*h)&&((x>h)||(x<2*h));
bool inRectangle1 = ((x > 0) || (x < 3*h)) && (y < h);
bool inRectangle2=(x>h)&&(y>h)||(x<2*h)&&(y>h);
bool commonBorder = (x >= h) && (y = h) || (x<=  2 * h) && (y = h);
if (outRectangle1 || outRectangle2) {
	cout << "outside" << endl;
}
else if (inRectangle1 || inRectangle2) {
	cout << "inside" << endl;
}
else {
	cout << "border" << endl;
}
return 0;
}
