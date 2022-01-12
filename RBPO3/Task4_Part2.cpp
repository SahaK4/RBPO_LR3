module;
#include <cmath>
module BPZ1901.Kazina.Lab3.Task4:Part2;

double RBPO::Lab3::Task4::f2(double x)
{
	double res;
	if (x > 3)
		res = -3 * x + 9;
	else
		res = pow(x, 3) / (pow(x, 2) + 8);
	return res;
}