#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double F(int n, int x)
{
	if(n<1) return 0;
	
	return n%3 / pow(3,x+1) + F(n/3,++x);
}


int main()
{
	int n=6,i;
	double x;
	for(i=1; i<=n; i++)
	{
		x = F(i,0);
		printf("\n%d %lf",i,x);
	}
	return 0;
}
