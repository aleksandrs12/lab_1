// C++ program to print something with empty main()
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	int taskNr = 87863 % 20;
	cout << "Task Nr: " << taskNr << '\n';
	cout << std::fixed;
	double alpha;
	cin >> alpha;

	alpha = M_PI / 180 * alpha;

	float k = sin(2 * alpha);

	double z1 = (sin(2 * alpha) + sin(5 * alpha) - sin(3 * alpha));
	float denominator = cos(alpha) + 1 - 2 * pow(k, 2);
	z1 /= denominator;
	double z2 = 2 * sin(alpha);
	cout << "z1 = " << z1 << '\n';
	cout << "z2 = " << z2 << '\n';
}
