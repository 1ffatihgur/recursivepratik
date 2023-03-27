#include<stdio.h>


int toplamR(int n)
{
	if(n<2)
	{
		return 1;
	}
	else
	{
		return toplamR(n-1)*(n-1)+n;
	}
}


int main()
{
	
	int a;
	
	printf("bir sayi girin: ");
	scanf("%d",&a);
	
	printf("\nToplami: %d",toplamR(a));
	
	return 0;
}
