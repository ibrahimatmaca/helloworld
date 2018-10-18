#include<stdio.h>
#include<string.h>

struct telrehber{
	char ad[20];
	char sehir[20];
	int tel;
}tel[3];

int main()
{
	int i;
	for(i=1;i<=3;i++){
		printf("%d.-isim:",i);
		scanf("%s",&tel[i].ad);
		printf("%s'in sehri:",tel[i].ad);
		scanf("%s",&tel[i].sehir);
		printf("%s'in numarasi:",tel[i].ad);
		scanf("%d",&tel[i].tel);
		printf("\n");
	}
	
	printf("\n---Rehber----\n");
	for(i=1;i<=3;i++){
		printf("Ad:	  %s\n",tel[i].ad);
		printf("Soyad:%s\n",tel[i].sehir);
		printf("Numara:%d\n",tel[i].tel);
		printf("-----------------\n");
	}
}
