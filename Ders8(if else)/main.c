#include <stdio.h>

int main() {

    printf("Ogrenci Ortalama Hesaplama");
    printf("\n\n");

    int s1,s2,ort;
    char ad[15],soyad[15],sinif[5];

    printf("Adiniz: ");
    scanf("%s",&ad);
    printf("Soyadiniz: ",soyad);
    scanf("%s",&soyad);
    printf("Sinifiniz: ");
    scanf("%s",&sinif);

    printf("Sinav 1 degerini girin: ");
    scanf("%d",&s1);

    printf("Sinav 2 degerini girin: ");
    scanf("%d",&s2);

    ort=(s1+s2)/2;
    printf("\n\n");

    printf("Ad: %s - Soyad: %s\n",ad,soyad);
    printf("Sinif: %s",sinif);
    printf("\n");
    if(ort>=50){
        printf("Ortalamaniz: %d - Gecti",ort);
    }
    else{
        printf("Ortalamaniz: %d - Kaldi",ort);
    }


    return 0;
}
