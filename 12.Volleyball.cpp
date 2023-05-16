#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main() {
	string year;
	double holidays;
	double homeWeekends;
	double yearWeekends = 48;
	cin >> year;
	cin >>holidays;
	cin >> homeWeekends;
	double sofiaWeekends = (3 *(yearWeekends-homeWeekends))/ 4;
	double sofiaHolidays = (2*holidays)/3;
	double playTotal= ((double)sofiaWeekends + sofiaHolidays+(double)homeWeekends);
	if (year=="leap") {
		playTotal=playTotal*0.15+playTotal;
	}
	else if (year == "normal") {
		playTotal = playTotal;
	}
	cout <<floor(playTotal) << endl;
}
