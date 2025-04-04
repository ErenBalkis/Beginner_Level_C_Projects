#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
    int i,j,giris;
	int yildiz,bosluk,temp;
	printf("Lutfen yildiz boyutu icin 3 veya 5 giriniz:");
	scanf("%d",&giris);
	//UST kisim
	yildiz=1;
    if(giris==3){ 
        bosluk=2+giris;
    } else{
        bosluk=2*(giris-1);
    }
	for(i=0;i<giris;i++){
		for(j=0;j<bosluk;j++){
			printf(" ");
		}
		for(j=0;j<yildiz;j++){
			printf("*");
		}
	printf("\n");
	yildiz+=2;
	bosluk--;
	}
	//ORTA kisim
        yildiz=(giris*3)+2;
        temp=0;
	for(i=0;i<giris;i++){
		for(j=0;j<temp;j++){
			printf(" ");
		}
		for(j=1;j<=yildiz;j++){
			printf("*");
		}
	printf("\n");
	yildiz-=2;
	temp++;
	}
    //ALT kisim
    int tekrar=giris*3;
    if(giris==5){ yildiz=giris-1;}
    else if(giris==3){ yildiz=giris;}
    temp=giris-1;
    int tempp=1;
    for(i=0;i<tekrar;i++){
        for(j=0;j<temp;j++){
            printf(" ");
        }
        for(j=0;j<yildiz;j++){
            printf("*");
        }
        for(i=0;i<tempp;i++){
            printf(" ");
        }
        for(j=0;j<yildiz;j++){
            printf("*");
        }
        yildiz--;
        tempp+=2;
        printf("\n");
    }

    return 0;
}
