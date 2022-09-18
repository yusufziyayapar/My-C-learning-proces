#include <stdio.h>

int main() {
    /* Her yolcunun el bagajı hakkı 8 Kg normal bagaj hakkı 15 kg.
     Eğer yolcular el haklarını geçerse kg başına 4TL normal haklarını
    geçerse kg başına 5TL ödeme yapmak zorundalar.
    Klavyeden el ve bagaj ağırlığı girilen kişinin ödeyeceği tutarı
     bulan programı kodlayınız.*/

  /*  int el,normal;
    int normaltutar,eltutar,toplam;

    printf("El bagajinizin agirligini giriniz: ");
    scanf("%d",&el);
    printf("Normal bagajinizin agirligini giriniz: ");
    scanf("%d",&normal);


    if(normal<15) // Normal bagajdan artan borç
    {
        normaltutar=0;
        printf("Borcunuz yoktur");
    }else
    {
        normaltutar=(normal-15)*5;
    }

    if(el<5) // El bagajından artan borç
     {
        eltutar=0;

    }else{
        eltutar=(el-8)*4;
    }
toplam=eltutar+normaltutar; // Artan borc varsa en son topla
    if(toplam==0){
        printf("Borcunuz yoktur!");
    }else
    {
        printf("Borcunuz: %d",toplam);
    } */
    //------------------------------------------------------------------
  /* Klavyeden birbirinden farklı 2 sayı girilmesini sağlayan ve
    bu iki sayı arasındaki(bu iki sayi dahil)tam sayıların toplamını
    hesaplayıp ekrana yazdıran program*/

   /* int s1,s2,toplam=0,buyuk,kucuk;
    yeniden:
    printf("1.Sayi: ");
    scanf("%d",&s1);

    printf("2.Sayi: ");
    scanf("%d",&s2);

    if(s1==s2) // eğer sayılar birbirine eşitse yeniden satırına dön ve devam et
    {
        goto yeniden; // Yeniden satırına geri dön komutu
      }
    else
    {
    if(s1>s2)
     {
        buyuk=s1;
        kucuk=s2;
    } else
      {
        kucuk=s1;
        buyuk=s2;
       }
    }
    for (int i = kucuk; i <=buyuk ; ++i)
    {
     toplam=toplam+i;
    }
    printf("Sonuc: %d",toplam); */
   //-------------------------------------------------------------------
   /*Bir otelde kışın 320, ilkbaharda kışın 4 te biri
     yazın ilkbaharın 8 katı, sonbaharda yazın 10 da biri insan kalmıştır.
    Buna göre 1 yıl içinde otelde kaç kişinin kaldığını bulan
     programı kodlayınız. */
   /*
     int kış,ilkbahar,sonbahar,yaz;

   kış=320;
   ilkbahar=kış/4;
   yaz=ilkbahar*8;
   sonbahar=yaz/10;
   int toplam;
   toplam=kış+ilkbahar+sonbahar+yaz;

    printf("1 yil icinde kalan musteri sayisi: %d",toplam); */
   //---------------------------------------------------------------------
   /* Girilen üç basamaklı sayının rakamları toplamını bulan programı
    * kodlayınız. */
/*   int sayi;
    printf("Uc basamakli bir sayi giriniz: ");
    scanf("%d",&sayi);
    int a,b,c,toplam;

    a=sayi/100; // Yüzler basamağı
    b=(sayi/10)%10; // onlar
    c=sayi%10;

    toplam=a+b+c;
    printf("Sonuc: %d",toplam); */



    return 0;
}
