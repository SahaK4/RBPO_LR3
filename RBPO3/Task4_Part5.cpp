module;
#include <cmath>
module BPZ1901.Kazina.Lab3.Task4:Part5;
import :Part3;

double RBPO::Lab3::Task4::f4(double eps)
{
	double res = 0;
	int i = 0;
	do
	{
		res += a(i);
		i++;
	} while (abs(a(i) - a(i - 1)) > eps);

	return res;
}