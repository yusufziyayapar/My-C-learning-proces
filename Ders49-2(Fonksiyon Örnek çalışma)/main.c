#include <stdio.h>

int ortalama(int x,int y,int z,int f) // Geri döndüren bir fonksiyon tanımladık ortalama hesaplayan
{
    int sonuc;
    sonuc=(x+y+z+f)/4;
    return sonuc;
}
struct ogrenci{
    char adsoyad[20];
    int sinif[3];
    char sube[20];
    char no[3];
}; struct ogrenci o;

int main() {

    printf("|--------------------- Ogrenci Ortalama Hesaplama Uygulamasi ---------------------|\n\n");

    printf("Ogrenci Ad Soyad: ");
    gets(o.adsoyad);

    printf("Sinif(Sadece sayi): ");
    scanf("%d",&o.sinif);

    printf("Sube: ");
    scanf("%s",&o.sube);

    printf("3 rakamdan olusan ogrenci no: ");
    scanf("%d",&o.no);

    printf("\n\n");

    printf("Ogrenci Ad Soyad: ");
    puts(o.adsoyad);
    printf("Sinif: %d-%s",o.sinif,o.sube);
    printf("No: %d",o.no);

    int ex1,ex2,ex3,prj;
    double s;
    for (int i = 0; i <5 ; ++i) { // For döngüsü ile switch case kullanıp sınav notlarını aldık sonra ortalamayı hesaplatıp ekrana yazdırdık.
        switch (i) {
            case 0:
                printf("%d.Sinavi giriniz: ",i+1);
                scanf("%d",&ex1);
                break;
            case 1:
                printf("%d.Sinavi giriniz: ",i+1);
                scanf("%d",&ex2);
                break;
            case 2:
                printf("%d.Sinavi giriniz: ",i+1);
                scanf("%d",&ex3);
                break;
            case 3:
                printf("Proje notunuzu giriniz: ");
                scanf("%d",&prj);
                break;
            case 4: s= ortalama(ex1,ex2,ex3,prj); // Ortalamayı kendi yazdığımız fonksiyon ile hesaplattık ve kod kirliliğini engelleyip
                                                  // işimizi kolaylaştırdık.

                if(s<60 && s>=50)
                {
                    printf("Ortalamaniz: %.2lf - Yaz Okuluna kaldiniz",s);

                } else if(s<50)
                {
                    printf("Ortalamaniz: %.2lf - Kaldiniz",s);

                } else if(s>=60 && s<80)
                {
                    printf("Ortalamaniz: %.2lf - Tesekkur ile Gectiniz",s);

                } else if(s>=80)
                {
                    printf("Ortalamniz: %.2lf - Takdir ile Gectiniz",s);

                }
                break;
        }
    }
    return 0;
}
