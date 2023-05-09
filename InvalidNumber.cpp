#include <iostream>
using namespace std;
int main() {
	int number;
	cin >> number;
	bool inRange = (number >= 100 && number <= 200) || number == 0;
	if (!inRange)
	{
		cout << "Invalid" << endl;
	}
	return 0;
}