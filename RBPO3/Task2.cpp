module;
#include <cmath>
module BPZ1901.Kazina.Lab3.Task2;

double RBPO::Lab3::Task2::f1(double x)
{
	double pi = 3.14;
	double res = sin(pi / 2 + 3 * x) / (1 - sin(3 * x - pi));
	return res;
}

double RBPO::Lab3::Task2::f2(double x)
{
	double res;
	if (x > 3)
		res = -3 * x + 9;
	else
		res = pow(x, 3) / (pow(x, 2) + 8);
	return res;
}

double a(double n)
{
	double a_i;
	a_i = pow(-1, n) * (pow(2, n) / (pow(n, n + 1) + 1));

	return a_i;
}
double RBPO::Lab3::Task2::f3(int n)
{
	double res = 0;
	int i = 0;
	do
	{
		res += a(i);
		i++;
	} while (i <= n);
	return res;
}
double RBPO::Lab3::Task2::f4(double eps)
{
	double res = 0;
	int i = 0;
	while (abs(a(i) - a(i - 1)) > eps)
	{
		res += a(i);
		i++;
	}

	return res;
}