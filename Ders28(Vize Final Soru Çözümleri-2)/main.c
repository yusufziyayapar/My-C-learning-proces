#include <stdio.h>

int main() {
/* Bir bakteri türü her saat başı kendini ikiye bölüyor...24 saat sonunda
 kaç bakteri oluşur ?
    int sayi=1;
    for (int i = 1; i <=24 ; ++i) //24 Kere bu döngüyü çalıştır demek
    { // yani 24 defa döngü içindeki işlemi yapıyor
        sayi=sayi*2;
    }
    printf("%d",sayi); */
//-----------------------------------------------------------------------
/* Klavyeden girilen dört sayıyı toplayan programı kodlayınız.
int sayi,toplam;

    for (int i = 1; i <=4 ; ++i)
    {
        printf("%d.Sayi: ",i);
        scanf("%d",&sayi);
        toplam=toplam+sayi;
    }
    printf("Toplam Sonuc:%d ",toplam); */
//----------------------------------------------------------------------
    /* Sıfır girilene kadar girilen sayıları toplayan programı kodlayınız.
    int i,sayi;
    int toplam=0;

    for(i=1;i;i++)
    {
        printf("%d. sayiyi girin: ",i);
        scanf("%d",&sayi);
        toplam=toplam+sayi;

        if(sayi==0)
        {
            printf("toplami: %d",toplam);
            return;
        }
    }
    // başka bir çözüm yolu:
    int sayi;
    int toplam=0;

    while (sayi!=0)
    {
        printf("Sayi: ");
        scanf("%d",&sayi);
  toplam=toplam+sayi;
    }
    printf("Toplam: %d",toplam); */

    //--------------------------------------------------------------------




    return 0;
}
