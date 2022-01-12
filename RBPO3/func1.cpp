module;
#include <cmath>
module BPZ1901.Kazina.Lab3.Task3;

double RBPO::Lab3::Task3::f1(double x)
{
	double pi = 3.14;
	double res = sin(pi / 2 + 3 * x) / (1 - sin(3 * x - pi));
	return res;
}

