module;
#include <cmath>
module BPZ1901.Kazina.Lab3.Task3;

double RBPO::Lab3::Task3::a(double n)
{
	double a_i;
	a_i = pow(-1, n) * (pow(2, n) / (pow(n, n + 1) + 1));

	return a_i;
}