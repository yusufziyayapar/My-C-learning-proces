#include <stdio.h>

int main() {

    printf("**********Gelismis Matematik Uygulamasina Hosgeldiniz**********");
    printf("\n\n");

     int sayi,i,toplam,fark,bol,carp,ortalama,dizi[100],secim;

    printf("Eleman Sayisini giriniz: ");
    scanf("%d",&sayi);

    for (i=0;i<sayi;i++)
    {
        printf("%d.Degeri giriniz: ",i+1);
        scanf("%d",&dizi[i]);
    }

    printf("\n\n");

    printf("1- Sayilari Topla\n"
           "2- Sayilari Carp\n"
           "3- Sayilarin Ortalamasini al");

    printf("\n\n");

    printf("Yapmak istediginiz islemi seciniz: ");
    scanf("%d",&secim);

    switch (secim)
    {
        case 1:
            for (i=0;i<sayi;i++)
            {
                toplam=toplam+dizi[i];

            }
            printf("Sayilarin Toplami: %d",toplam);
            break;
        case 2:
            for (int i=0;i<sayi;i++)
            {
            carp=carp*dizi[i];
            }
            printf("Sayilarin Carpimi: %d",carp);
            break;
        case 3:
            for (i = 0; i <sayi ;i++)
            {
            toplam=toplam+dizi[i];

            } ortalama=toplam/sayi;
            printf("Sayilarin Ortalamasi: %d",ortalama);
            break;
        default:
            printf("Hatali Sayi Girdiniz");
            break;
    }







    return 0;
}
