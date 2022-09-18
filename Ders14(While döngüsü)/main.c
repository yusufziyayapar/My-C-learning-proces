#include <stdio.h>

int main() {
/* while genel döngü
    int i;
    i=1;

    while(i<=5)
    {
        printf("Merhaba Ege Bolgesi\n");
        i++;
    } */

//-------------------------------------------------------------

/* while döngüsü ile 1-10 arası sayıları yazdırma
    int i;
    i=1;

    while(i<=10)
    {
        printf(" %d",i);
        i++;
    } */

//-------------------------------------------------------------

/* while döngüsü ile 1-20 arası çift sayıları yazdıran ama 14 ü listelemeyen program.
  int i;
  i=1;
    while (i<=20)
    {
        i++;
        if(i%2==0 && i!=14)
        {
            printf("%d\n",i);
        }
    } */

//-------------------------------------------------------------

// while ile faktoriyel hesaplama
   /* int faktoriyel,sayi;
    faktoriyel=1;
    printf("Sayi Giriniz: ");
    scanf("%d",&sayi);

    while (sayi>1)
    {
        faktoriyel= faktoriyel*sayi;
        sayi--;
    }
    printf("Sonuc: %d",faktoriyel); */

   //-------------------------------------------------------------

 /* For döngüsü dizi elemanları toplamı döngüsü

   int dizi[5] = {5,17,25,30,42}, toplam=0;

   for(int i=0; i<5;i++)
   {
       toplam= toplam+dizi[i];
   }
    printf("Sonuc: %d",toplam); */

 //-------------------------------------------------------------

 /* While döngüsü ile dizi elemanları toplama
 int i,dizi[5] = {5,17,25,30,42}, toplam=0;
i=0;
    while (i<5)
    {
        toplam= toplam+dizi[i];
        i++;

    }
    printf("Sonuc: %d",toplam); */











    return 0;
}
