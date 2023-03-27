#include<stdio.h>

int farkR(int n)
{
	if(n<0) 
	{
		return 0;
	}
	
	else if(n%2 != 0) 
	{
		return (n%10) * (n%10) + farkR(n / 10);
		printf("aaaaa");
	}
	
	else 
	{
		return -(n%10) * (n%10) + farkR(n / 10);
	}
}

int main()
{
	
	int a;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&a);

	printf("sonuc: %d",farkR(a));	
	
	
	return 0;
}
