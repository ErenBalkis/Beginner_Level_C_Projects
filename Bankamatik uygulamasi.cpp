#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
	char isim[5]="Eren";
	int parola1=1234;
	int parola;
	int secim,yatirilacakPara,cekilecekPara,bakiye=100;
	char istenecekisim[5];
	printf("Bankamatige hosgeldiniz!\nLutfen kullanici adinizi giriniz:");
	scanf("%s",&istenecekisim);
	printf("\nLutfen sifrenizi giriniz:\n");
	scanf("%d",&parola);
	if(strcmp(istenecekisim,isim)==0 && parola==parola1){  // strcmp komutu sayesinde iki stringin ayni olup olmadigini ogrenebiliriz.Bunu kullanmak icin <string.h>'i eklemeliyiz.
	printf("Kullanici bilgileri eslesmistir.\nSisteme hosgeldiniz!\n");
	printf("Asagidaki islemlerden biri icin tuslayiniz:\n[1]Para yatirma\n[2]Para cekme\n[3]Kullanici Bilgileri\n");
	scanf("%d",&secim);
	if(secim==1){
		printf("Ne kadar para yatirmak istersiniz?");
		scanf("%d",&yatirilacakPara);
		bakiye+=yatirilacakPara;
		printf("Para yatirma islemi basarili.\nYatirdiginiz miktar:%d\nGuncel bakiyeniz:%d",yatirilacakPara,bakiye);
	} 
	else if(secim==2){
		printf("Ne kadar para cekmek istersiniz?");
		scanf("%d",&cekilecekPara);
		if(cekilecekPara<=bakiye){
			bakiye-=cekilecekPara;
			printf("Para cekme islemi basarili.\nCektiginiz miktar:%d\nGuncel bakiyeniz:%d",cekilecekPara,bakiye);
		} else printf("Bakiye yetersiz!");
	}
	else if(secim==3){
		printf("Kullanici arayuzune hosgeldiniz.\nKullanici adiniz:%s\nSifreniz:%d\nHesabinizdaki bakiye:%d",isim,parola,bakiye);
	}
	else
		printf("Hatali giris!\nTekrar deneyin!");
	}
	else 
		printf("Kullanici adi veya sifre hatali!");
	
	return 0;
}
