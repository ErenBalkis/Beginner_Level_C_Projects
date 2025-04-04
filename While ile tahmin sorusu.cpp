#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int tahmin, uretilenSayi;
	srand(time(NULL));	// rastgele sayý üretimini sistem saatine dayalý olarak farklý bir tohum ile baþlatýr.
	uretilenSayi = (rand()%1000)+1;	// rand()%1000, 0 ile 1000 arasinda bir sayi uretir; buna 1 ekleyerek 1 ile 1000 arasina cekiyoruz.
	printf("1 ile 1000 arasinda bir sayi tahmin ediniz:");
	do{
		scanf("%d",&tahmin);
		if(tahmin>uretilenSayi){
			printf("Daha kucuk bir sayi dene!");
		}
		else if(tahmin<uretilenSayi){
			printf("Daha buyuk bir sayi dene!");
		}
		else{
			printf("Tebrikler %d dogru cevapti!",tahmin);
		}
	}while(tahmin!=uretilenSayi);
	return 0;
}
