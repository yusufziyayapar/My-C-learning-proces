#include <stdio.h>
// Struct: Aralarında mantıksal ilişki bulunan farklı türden bilgilerdir

struct kayit
{
    char adsoyad[20];
    float ort;
    int snf;
    int no;
    char sube[1];
};

struct kayit ogr;



int main() {

    printf("Adiniz Soyadiniz: ");
    gets(ogr.adsoyad);

    printf("Okul Numaraniz: ");
    scanf("%d",&ogr.no);

    printf("Sinifiniz: ");
    scanf("%d",&ogr.snf);

    printf("Subeniz: ");
    scanf("%s",&ogr.sube);

    printf("Ortalamaniz: ");
    scanf("%f",&ogr.ort);

    printf("\n\n***********************************************************************\n\n");
    printf("\tOgrenci Bilgisi\n\n");

    printf("Adi Soyadi:\t");
    puts(ogr.adsoyad);
    printf("Soyadi:\t%d\n",ogr.no);
    printf("Sinifi:\t%d/%s\n",ogr.snf,ogr.sube);
    printf("Ortalamasi:  %.2f\n",ogr.ort);
    return 0;
}
