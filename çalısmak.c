#include<stdio.h>
#include<string.h>

int main()
{	
	int dizi_sayi[7]={20,24,255,15,46,57,75};
	int *ptr = dizi_sayi;
	int *ptr2 = dizi_sayi;
	
	int s;
	for(s=0;s<7;s++)
		ptr[s]*=2;
	for(s=0;s<7;s++)
		printf("dizi sayi[%d]: %d\n",s,ptr2[s]);
}
