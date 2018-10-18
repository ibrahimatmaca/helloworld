#include<stdio.h>
#include<stdlib.h>

int main()
{
	int sayi,i,bolum;
	float temp;
	printf("Lutfen bir sayi girin.");
	scanf("%d",&sayi);
	printf("kac kez bolunsun:");
	scanf("%d",&bolum);
	for(i=bolum;i>=0;i--)
	{
	temp =(float) sayi/i;
	printf("%.2f\n",temp);
	}
	return 0;
}
