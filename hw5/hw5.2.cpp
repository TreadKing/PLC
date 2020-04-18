#include <iostream>
using namespace std;

enum names {Finley, Judy, Husna, Amman, Kezia, Sue};
names test;

int main() {

	//perform operations
	cout << (Judy + Husna) << endl;
	cout << (Amman - Judy) << endl;
	cout << (Finley * Kezia) << endl;
	cout << (Sue / Husna) << endl;
	cout << (Judy | Husna) << endl;
	cout << (Husna & Kezia) << endl;
	cout << (Judy ^ Kezia) << endl;
	cout << (Husna << 1) << endl;
	cout << (Amman >> 1) << endl;

	// working code ->
	test = (names)1;
	int testNumber = 6 + Finley;
	cout << "Test name: " << testNumber << endl;
	cout << test << endl;
	system("pause");
	return 0;
}
