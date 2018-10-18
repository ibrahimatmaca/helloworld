#include<stdio.h>
#include<conio.h>
//iþçilerin maaþýný hesaplamaya yarayan program 
int main()
{
	int saat,maas;
	int ucret = 90;
	char isim[10];
	printf("----------Hos Geldiniz.------------\n");
	printf("Calisanin ismi:");
	scanf("%s",&isim[10]);
	printf("Calisma saati:");
	scanf("%d",&saat);
	maas = ucret *  saat;
	printf("%s Odenecek Ucret:%d",isim[10],maas);
}
