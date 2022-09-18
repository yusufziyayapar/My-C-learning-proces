#include <stdio.h>

int main() {

    int sayi,i,dizi[100],toplam,ort,carpim=1;

    printf("<----------Dort Islem Hesaplama Uygulamasına Hoşgeldiniz---------->");
    printf("\n\n");
    printf("Eleman sayisini giriniz: ");
    scanf("%d",&sayi);



    for (int i = 0; i <sayi ; ++i)
    {
        printf("%d.Sayiyi Giriniz: ",i+1);
        scanf("%d",&dizi[i]);


    }
    printf("\n\n");

    for (int i = 0; i <sayi ; ++i)
    {
        toplam=toplam+dizi[i];
    }
    ort=toplam/sayi;
    printf("\n\n");

    for (int i = 0; i <sayi ; ++i)
    {
        carpim=carpim*dizi[i];
    }


    printf("Toplam: %d",toplam);
    printf("\n");
    printf("Ortalama: %d",ort);
    printf("\n");
    printf("Carpimlari: %d",carpim);







    return 0;
}
