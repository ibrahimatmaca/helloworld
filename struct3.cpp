#include<stdio.h>
#include<stdlib.h>

struct futbolcu{
	char ad[20],takim[30];
	int yas;
};

struct tarih{
	char date[20];
}t={"20.10.2025"};

void listele(struct futbolcu x,struct tarih t)
{
	printf("Ad :%s\n",x.ad);
	printf("Takim:%s\n",x.takim);
	printf("Yas:%d\n",x.yas);
	printf("Tarih:%s",t.date);
	
}

int main()
{
	struct futbolcu f={"Muhammet EMRE","TsClub",19};
	listele(f,t);
}
