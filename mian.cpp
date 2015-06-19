#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long double R = 0;
	cout << "write radius circul" << endl;
	cin >> R;
	long double R2 = R * R;
	const long double Pi = 3.14;
	long double S = R2 * Pi;
	cout << "S = " << S;
	int w = 0;
	cin >> w;
	return 0;
}
