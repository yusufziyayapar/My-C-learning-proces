#include <stdio.h>

int main() {
/*
    int sayi1,sayi2,sonuc;
    char islem;
    sayi1=75;
    sayi2=15;
    printf("islemi giriniz: ");
    scanf("%s",&islem);

    switch (islem) {
        case'+':sonuc=sayi1+sayi2;
            printf("Sonuc: %d",sonuc); break;
        case'-':sonuc=sayi1-sayi2;
            printf("Sonuc: %d",sonuc); break;
        case '*':sonuc=sayi1*sayi2;
            printf("Sonuc: %d",sonuc); break;
        case '/':sonuc=sayi1/sayi2;
            printf("Sonuc: %d",sonuc); break;
        default:
            printf("Hatali islem girdiniz !");
            break; */

    printf("Matematik Menusu\n");
    printf("********************\n\n");
    printf("1-Karede alan ve Cevre Hesabi\n");
    printf("2-Girilen Sayinin Kubu\n");
    printf("3-Cemberde Alan ve Cevre Hesabi\n");
    printf("4-5x2+7x+9 x e gore islem sonucu\n");
    printf("5-Dikdortgende Alan ve Cevre Hesabi\n");
    printf("6-Karne Notu Hesaplama\n\n");

    int s1,s2,s3,sonuc,secim,cevre,alan,pi,ortalama,proje;

    printf("isleminizi seciniz: ");
    scanf("%d",&secim);
    pi=3;
    switch(secim)
    {
        case 1:printf("Karenin bir kenarini giriniz: ");
            scanf("%d",&s1);
            cevre=4*s1;
            alan=s1*s1;
            printf("Alan: %d - Cevre: %d",alan,cevre);
            break;
        case 2:
            printf("Kubu alinacak sayiyi giriniz: ");
            scanf("%d",&s1);
            sonuc=s1*s1*s1;
            printf("Sonuc: %d",sonuc);
            break;
        case 3:
            printf("Cemberin Yari Capini giriniz: ");
            scanf("%d",&s1);
            cevre=2*pi*s1;
            alan=pi*s1*s1;
            printf("Cemberin Alani: %d - Cemberin Cevresi: %d",alan,cevre);
            break;
        case 4:
            printf("x degerini giriniz:");
            scanf("%d",&s1);
            sonuc=5*s1*s1+7*s1+9;
            printf("Sonuc: &d",sonuc);
            break;
        case 5:
            printf("Dikdörtgenin Uzun kenarini giriniz: ");
            scanf("%d",&s1);
            printf("Dikdörtgenin Kisa kenarini giriniz: ");
            scanf("%d",&s2);
            alan=s1*s2;
            cevre=(s1+s2)*2;
            printf("Dikdörtgenin Alani: %d -  Dikdörtgenin Cevresi: %d",alan,cevre);
            break;
        case 6:
            printf("Birinci Sinavinizi giriniz: ");
            scanf("%d",&s1);
            printf("ikinci sinavinizi giriniz: ");
            scanf("%d",&s2);
            printf("ucuncu sinavinizi giriniz: ");
            scanf("%d",&s3);
            printf("Proje notunuzu giriniz: ");
            scanf("%d",&proje);

            ortalama=(s1+s2+s3+proje)/4;

            if(ortalama<50)
            {
                printf("Ortalamaniz: %d - Kaldiniz",ortalama);
            } else if(ortalama>=50 && 60>ortalama){
                printf("Ortalamaniz: %d - Gectiniz ama Yaz okulu zorunlulugunuz var",ortalama);

            }
            else if(ortalama>=60)
            {
                printf("Ortalamaniz: %d - Gectiniz Tebrikler.",ortalama);
            }
            break;
        default:
            printf("Hatali Giris Tekrar Deneyini!");
            break;





    }




    return 0;
}
