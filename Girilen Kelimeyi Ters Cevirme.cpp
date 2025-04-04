#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
					
void degistir1(char kelime[]){
	int uzunluk;
	uzunluk=strlen(kelime);
	printf("%s\n",kelime);
	printf("%c\n",kelime[uzunluk-1]);
	char yenimetin[uzunluk];
	yenimetin[0]=kelime[uzunluk-1];		
	yenimetin[1]=kelime[uzunluk-2];
	yenimetin[2]=kelime[uzunluk-3];
	yenimetin[3]=kelime[uzunluk-4];
	yenimetin[uzunluk]='\0';
	printf("%s",yenimetin);
}
void degistir(char metin[])	
{
	int uzunluk;
	uzunluk=strlen(metin);
	char yenimetin[uzunluk];
	for(int i=0;i<=uzunluk;i++){
		yenimetin[i]=metin[uzunluk-i-1];
	}
	yenimetin[uzunluk]='\0';
	printf("yeni metin=%s",yenimetin);
}
int main(){
	char metin[20];
	printf("Bir metin giriniz:");
	scanf("%s",&metin);
	degistir(metin);
	return 0;
}
