#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int x,maks=0,min=100,maxnum,minnum;
	int sinav[50];
	int numara[50];
	printf("Ogrenci sayisini giriniz:");
	scanf("%d",&x);
	for (int i=1;i<=x;i++){
		printf("%d. ogrenci numarasi ve notunu giriniz:",i);
		scanf("%d %d",&numara[i],&sinav[i]);
		if(maks<sinav[i]) {
			maks=sinav[i];
			maxnum=numara[i];
		}
		if(min>sinav[i]) {
			min=sinav[i];
			minnum=numara[i];
		}
	}
	printf("%d numarali ogrenci en yuksek notu (%d) almistir.\n",maxnum,maks);
	printf("%d numarali ogrenci en dusuk notu (%d) almistir.",minnum,min);
	return 0;
}
