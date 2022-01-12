
module;
#include <cmath>
export module BPZ1901.Kazina.Lab3.Task5;

namespace RBPO::Lab3::Task5
{
	export double f1(double x);
	export double f2(double x);
	double a(double n);
	export
	{
		double f3(int n);
		double f4(double eps);
	}
}

module :private;

namespace RBPO::Lab3::Task5
{
	double f1(double x)
	{
		double pi = 3.14;
		double res = sin(pi / 2 + 3 * x) / (1 - sin(3 * x - pi));
		return res;
	}

	double f2(double x)
	{
		double res;
		(x > 3) ? res = -3 * x + 9 : res = pow(x, 3) / (pow(x, 2) + 8);
		return res;
	}

	double a(double n)
	{
		double a_i;
		a_i = pow(-1, n) * (pow(2, n) / (pow(n, n + 1) + 1));

		return a_i;
	}

	double f3(int n)
	{
		double res = 0;
		for (int i = 0; i <= n; i++)
		{
			res += a(i);
		}
		return res;
	}

	double f4(double eps)
	{
		double res = 0;
		for (int i = 0; abs(a(i) - a(i - 1)) > eps; i++)
		{
			res += a(i);
		}
		return res;
	}
}