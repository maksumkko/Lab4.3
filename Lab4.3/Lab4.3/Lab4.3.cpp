#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double x, xp, xk, dx, F = 0, a, b, c; 

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a ;
	cout << "b = "; cin >> b ;
	cout << "c = "; cin >> c ;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(15) << "F" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x < xk)
	{
		if ((a < 0) && (c != 0))
		{
			F = a * pow(x, 2) + b * x + c;
		}
		else 
			if ((a > 0) && (c = 0))
			{
				F = -a / (x - b);
			}
			else
			{
				F = a * (x + c);
			}
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(15) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}

	cout << "---------------------------" << endl;

	return 0;
}