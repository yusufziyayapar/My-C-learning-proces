#include <stdio.h>

struct kayit
{
    char ad[20];
    char sifre[10];
}; struct kayit ogr[5];
int main() {
    printf("|- Sifreli kayit formu -|");

    int i;
    for(i=0;i<5;i++)
    {
        printf("\nAdiniz:"); scanf("%s",&ogr[i].ad);
        printf("Şifreniz(en fazla 10 karakterden oluşmali):");
        scanf("%s",&ogr[i].sifre);
    }

    for(i=0;i<5;i++)
    {
        printf("\n%d. kullanicinin Adi:%s\nŞifresi            :%s",i+1,ogr[i].ad,ogr[i].sifre);
    }


    return 0;
}
