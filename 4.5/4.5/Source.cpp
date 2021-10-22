#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;
int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));
	double Pi = 4 * atan(1.0);
	cout << "R = "; cin >> R;
	for (int i = 0; i < 10; i++)
	{
		x = 6. * rand() / RAND_MAX - R;
		y = 6. * rand() / RAND_MAX - R;
		if ((y >= -R && y <= 0 && x >= 0 && x <= R / 2) ||
			(x * y <= 1) ||
			(Pi * R * R / 4) )
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}