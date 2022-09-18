#include <stdio.h>

int main() {
 /* Tabanı girilen dik üçgeni oluşturan programı kodlayınız
    int taban;
    printf("Tabani giriniz: ");
    scanf("%d",&taban);
    for (int i = 0;  i<=taban; i++)
    {
        for (int j = 0; j <=i; ++j)
        {
            printf("*");
        }
        printf("\n");
    } */
 //----------------------------------------------------------------------
/* 1+5+9+13+...+81 dizisinin toplamını bulan programı kodlayınız.
 int toplam;
    for (int i = 1; i <=81 ; i+=4)
    {
        toplam=toplam+i;
    }
    printf("Sonuc: %d",toplam); */
//-----------------------------------------------------------------------
/* 2 ler galibiyet , 0 lar berabere ve 1 ler mağlubiyeti temsil etmektedir
 * bu takımın kümeden düşmemesi için 12 puan alması gerekmektedir
 * takımın skor tablosu "2|1|0|0|2|1|1|2|1|0"
 * takımın küme düşüp düşmediğini ve puanını hesaplayan kodu dizi kullanarak
 * kodlayınız.
int skor[10]={2,1,0,0,2,1,1,2,1,0};
int puan;
    for (int i = 0; i <10 ; ++i)
    {
if (skor[i]==2)
{
    puan=puan+3;
} else if(skor[i]==1)
{
    puan=puan+0;
} else if(skor[i]==0){
    puan=puan+1;
}
    }
    if(puan>=12){
        printf("Kume dusmediniz - puaniniz: %d",puan);
    }
    else{
        printf("Kume dustunuz - puaniniz: %d",puan);
    } */
//-------------------------------------------------------------------------





    return 0;
}
