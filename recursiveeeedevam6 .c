#include<stdio.h>

int fnkR(int n)
{
	if(n<1) return 1;
	
	return fnkR(n-1) + (n-1)*(n+1);
}


int main()
{
	int a;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&a);
	
	printf("sonuc: %d",fnkR(a));
}
