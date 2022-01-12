module;
#include <cmath>
export module BPZ1901.Kazina.Lab3.Task1;

namespace RBPO::Lab3::Task1
{
	export double f1(double x)
	{
		double pi = 3.14;
		double res = sin(pi / 2 + 3 * x) / (1 - sin(3 * x - pi));
		return res;
	}
	export double f2(double x)
	{
		double res;
		(x > 3) ? res = -3 * x + 9:	res = pow(x, 3) / (pow(x, 2) + 8);
		return res;
	}
	double a(double n)
	{
		double a_i;
		a_i = pow(-1, n) * (pow(2, n) / (pow(n, n + 1) + 1));

		return a_i;
	}
	export double f3(int n)
	{
		double res = 0;
		for (int i = 0; i <= n; i++)
		{
			res += a(i);
		}
		return res;
	}
	export double f4(double eps)
	{
		double res = 0;
		for (int i = 0; abs(a(i) - a(i - 1)) > eps; i++)
		{
			res += a(i);
		}
		return res;
	}
}