#include<stdio.h>

int fonkR(int a)
{
	if(a<1) return 1;
	if(a==1) return 3;
	
	return fonkR(a-1) + a + fonkR(a-2);
}

int main()
{
	int n;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&n);
	
	printf("sonuc: %d",fonkR(n));
}
