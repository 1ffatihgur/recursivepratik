#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int faktorR(int a)
{
	if(a<2) return 1;
	return faktorR(a-1) * a;	
}


double tR(double x, double n)
{
	if(n<1) return 1;
	return (pow(-1,n) * pow(double x,double 2n+1)) / faktorR(2n+1) + tR(x, n-1);
	
}


int main()
{
	
	double a,b;
	
	printf("bir sayi giriniz: ");
	scanf("%lf",&a);
	
	printf("sayi giriniz: ");
	scanf("%lf",&b);
	
	printf("sonuc: %lf",tR(double a, double b));
	
	return 0;
}
