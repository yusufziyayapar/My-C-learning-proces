#include <stdio.h>

int main() {
    printf("<----------Ogrenci Karne Notu Hesaplama----------> ");
    printf("\n\n");

    char ad[15],soyad[15];
    int s1,s2,s3,proje,ort;
    printf("Adiniz: ");
    scanf("%s",&ad);

    printf("Soyadiniz: ");
    scanf("%s",&soyad);

    printf("Birinci Sinav Notunu Giriniz: ");
    scanf("%d",&s1);

    printf("ikinci Sinav Notunu Giriniz: ");
    scanf("%d",&s2);

    printf("Ucuncu Sinav Notunu Giriniz: ");
    scanf("%d",&s3);

    printf("Proje Notunuzu Giriniz: ");
    scanf("%d",&proje);

    ort=(s1+s2+s3+proje)/4;

    if(ort<50)
    {
        printf("Ortalamaniz: %d - F",ort);
    }

    if(50>=ort && ort<60)
    {
        printf("Ortalamaniz: %d - D",ort);
    }

    if(60>=ort && ort<70)
    {
        printf("Oratalamaniz: %d - C",ort);
    }

    if(70>=ort && ort<85)
    {
        printf("Ortalamaniz: %d - B",ort);
    }

    if(ort>=85)
    {
        printf("Ortalamaniz: %d - A",ort);
    }


    return 0;
}
