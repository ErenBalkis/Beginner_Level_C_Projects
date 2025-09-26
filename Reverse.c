#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
					
void ters(char metin[])
{
	int boy;
	char temp='\0';   
	boy=strlen(metin);
	for(int i=0;i<(boy/2);i++){
		temp=metin[i];
		metin[i]=metin[boy-i-1];
		metin[boy-i-1]=temp;
	}
}
int main(){
	char metin[20];
	printf("Lutfen bir metin giriniz:");
	scanf("%s",&metin);
	printf("\n");
	ters(metin);    
	printf("Girdiginiz metnin ters cevrilmis hali= %s",metin);
	return 0;
}
