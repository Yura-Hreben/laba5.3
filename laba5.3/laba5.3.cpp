#include <iostream>
#include <cmath>
using namespace std;
double h(const double x);
int main()
{
	double rp, rk, z, h{};
	int n;
	cout << "gp = "; cin >> rp;
	cout << "gk = "; cin >> rk;
	cout << "z = "; cin >> z;
	double dr = (rk - rp) / z;
	double r = rp;
	while (r <= rk)
	{
		z = h * (r + 1) + h * (r * r + 1) * h * (r * r + 1) + 1;
		cout << r << " " << z << endl;
		r += dr;
	}
	return 0;
}
double h(const double x)
{
	if (abs(x) >= 1  && x == 0)
		return cos(x)+ 1 / exp(x);
	else
	{
		double S = 0;
		int n = 0;
		double a = 1;
		S = ((-1) / (x * x)) * ((2 * n - 1) / (2 * n + 1));
		do
		{
			n++;
			double R = 1 / sin(x) * sin(x) * S;
			a *= R;
			S += a;
		} while (n < 6);
		return S;
	}
}