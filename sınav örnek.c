#include<stdio.h>
#include<math.h>

int power(int,int);

int main()
{
	int x,n;
	printf("Lutfen 2 sayi girin.\n");
	scanf("%d %d",&x,&n);
	printf("Sonuc:%d\n",power(x,n));
	
}
int power(int x,int n)
{
	if(n==0)
	return 1;
	if(n% 2==0)
	return pow(power(x,n/2),2);
	else 
	return x*power(x,n-1);
}
