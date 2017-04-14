#include"mySll.h"
int Factorial(int n)
{
	int Fact=1;
	int i;
	for(i=1;i<=n;i++)
	{
		Fact=Fact*i;
	}
	return Fact;
}
