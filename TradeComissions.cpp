#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	double comission = -1;
	string town;
	double sales;
	cin >> town;
	cin >> sales;
	if (town == "Sofia") {
		if (0 <= sales && sales <= 500) {
			comission = 0.05;
			sales = sales * comission;
		}
		else if (500 <= sales && sales <= 1000) {
			comission = 0.07;
			sales = sales * comission;
		}
		else if (1000 <= sales && sales <= 10000) {
			comission = 0.08;
			sales = sales * comission;
		}
		else if (sales > 10000) {
			comission = 0.12;
			sales = sales * comission;
		}
	}else if (town=="Varna") {
		if (0 <= sales && sales <= 500) {
			comission = 0.045;
			sales = sales * comission;
		}
		else if (500 <= sales && sales <= 1000) {
			comission = 0.075;
			sales = sales * comission;
		}
		else if (1000 <= sales && sales <= 10000) {
			comission = 0.10;
			sales = sales * comission;
		}
		else if (sales > 10000) {
			comission = 0.13;
			sales = sales * comission;
		}
	}else if (town == "Plovdiv") {
		if (0 <= sales && sales <= 500) {
			comission = 0.055;
			sales = sales * comission;
		}
		else if (500 <= sales && sales <= 1000) {
			comission = 0.08;
			sales = sales * comission;
		}
		else if (1000 <= sales && sales <= 10000) {
			comission = 0.12;
			sales = sales * comission;
		}
		else if (sales > 10000) {
			comission = 0.145;
			sales = sales * comission;
		}
	}
	if (comission>=0){
		cout << setprecision(2) << fixed << sales << endl;
	}
	else {
		cout << "error";
	}
	return 0;
}