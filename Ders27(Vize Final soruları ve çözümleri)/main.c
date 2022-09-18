#include <stdio.h>

int main() {
/* Üç basamaklı rakamları birbirinden farklı kaç tane sayu olduğunu bilen
programı c dili ile kodlayınız.

int sayac=0;
int i;
int a,b,c;

    for (i = 100; i <=999 ; i++)
    {
        a=i/100; // Yüzler Basamağı
        b=(i/10)%10;// Onlar Basamağı
        c=i%10;// Birler Basamgı
        if(a!=b && a!=c && b!=c)
        {
            sayac++;
        }
    }
    printf("%d",sayac);  */
//------------------------------------------------------------------
    /* Klavyeden Girilen sayının tam bölenlerini bulan programı kodlayın.

    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);

    for (int i = 1;  i<=sayi ; i++)
    {
        if(sayi%i==0)
        {
            printf("%d\n",i);
        }
    } */
//-----------------------------------------------------------------------
/* Klavyeden girilen sayinin kübünü alan program
int sayi,islem;

    printf("Kupu alinacak sayiyi giriniz: ");
    scanf("%d",&sayi);

    islem=sayi*sayi*sayi;

    printf("Sonuc: %d",islem); */
//------------------------------------------------------------------------







    return 0;
}
