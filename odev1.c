#include<stdio.h>
#include<stdlib.h>

int main()
{
	int sayi,i;
	float temp;
	printf("Lutfen bir sayi girin.");
	scanf("%d",&sayi);
	for(i=10;i>0;i--)
	{
	temp =(float) sayi/i;
	printf("%.2f\n",temp);
	}
	return 0;
}
