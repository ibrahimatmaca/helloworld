#include<stdio.h>

void mesajyaz(int *x)
{
	int i;
	for(i=1;i<=*x;i++)
		printf("%d- Merhaba Dunya\n",i);
}

int carp(int *a,int *b)
{
	return *a*(*(b));
}

void degistir(int *x,int *y)
{
	int gecicibellek;
	gecicibellek=*x;
	*x=*y;
	*y=gecicibellek;
}

int faktoriyel(int *x)
{
	int i,fakt=1;
	for(i=*x;i>=1;i--)
	{
		fakt=fakt*i;
	}
	return fakt;
}

int main()
{
	int sayi;
	printf("Tekrar sayisi gir:");
	scanf("%d",&sayi);
	mesajyaz(&sayi);
	//Pointer kullanarak fonksiyon islem
	int s1,s2,sonuc;
	printf("iki sayi girin:");
	scanf("%d %d",&s1,&s2);
	sonuc=carp(&s1,&s2);
	printf("%d x %d = %d\n",s1,s2,sonuc);
	
	//Kullanýcýnýn girdiði 2 sayýnýn yer deðiþtirmesi
	int deger1,deger2;
	printf("2 deger girin:");
	scanf("%d %d",&deger1,&deger2);
	degistir(&deger1,&deger2);
	printf("%d-%d\n",deger1,deger2);
	//Faktoriyel alma
	int a;
	printf("Faktoriyel alinacak sayi:");
	scanf("%d",&a);
	printf("Faktoriyel:%d",faktoriyel(&a));
	
	
}
