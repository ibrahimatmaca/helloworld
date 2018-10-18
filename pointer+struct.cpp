#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct telefon{
	char marka[20];
	float ekran;
	char sistem[20];
	int fiyat;
};

int main()
{
	struct telefon tel1;
	struct telefon tel2 ={"Asus",4.7,"Android",600};
	tel1.ekran = 5.2;
	strcpy(tel1.sistem,"ios");
	strcpy(tel1.marka,"nokia");
	tel1.fiyat = 1200;
	
	printf("------Telefon1--------\n");
	printf("Isletim sistemi: %s\n",tel1.sistem);
	printf("Marka: %s\n",tel1.marka);
	printf("Fiyat: %d\n",tel1.fiyat);
	printf("Ekran: %.1f\n",tel1.ekran);
	
	struct telefon *tel3;
	tel3 = &tel1;
	tel3->ekran = 9.7;
	strcpy(tel3->sistem,"yok");
	
	printf("------Telefon2--------\n");
	printf("Isletim sistemi: %s\n",tel2.sistem);
	printf("Marka: %s\n",tel2.marka);
	printf("Fiyat: %d\n",tel2.fiyat);
	printf("Ekran: %.1f\n",tel2.ekran);
	
	printf("------Telefon1--------\n");
	printf("Isletim sistemi: %s\n",tel1.sistem);
	printf("Marka: %s\n",tel1.marka);
	printf("Fiyat: %d\n",tel1.fiyat);
	printf("Ekran: %.1f\n",tel1.ekran);

}
/*Pointer ile struct farklý kullaným þekili


struct futbolcu{
	char ad[20];
	char takim[30];
	int yas;
};

int main()
{
	struct futbolcu f;
	strcpy(f.ad,"Muhammet Emre");
	strcpy(f.takim,"Trabzonspor");
	f.yas=18;
	
	struct futbolcu *ftr=&f;
	printf("Ad:%s\n",ftr->ad);
	printf("Takim:%s\n",ftr->takim); Burada kullanýlan " -> " iþareti
 	printf("Yas:%d",ftr->yas);
	
	
}
*/
	
