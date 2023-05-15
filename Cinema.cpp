#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	string type;
	int numRow;
	int numCol;
	double income=0;
	double totalRevenu;
	cin >> type;
	cin >> numRow;
	cin >> numCol;
	cout.setf(ios::fixed);
	if (type == "Premiere") {
		income = 12;
	}
	else if (type == "Normal") {
		income = 7.50;
	}
	else if (type == "Discount") {
		income = 5;
	}
	totalRevenu = income * numCol * numRow;
	cout << setprecision(2)<< totalRevenu << endl;
}