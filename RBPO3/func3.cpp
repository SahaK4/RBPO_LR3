module;
#include <cmath>
module BPZ1901.Kazina.Lab3.Task3;

double RBPO::Lab3::Task3::f3(int n)
{
	double res=0;
	int i = 0;
	do
	{
		res += a(i);
		i++;
	} while (i <= n);
	return res;
}