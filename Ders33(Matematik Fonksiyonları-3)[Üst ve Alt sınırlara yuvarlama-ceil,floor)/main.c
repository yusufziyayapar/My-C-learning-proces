#include <stdio.h>

int main() {
// Alt'a ve üst'e yuvarlama işlemleri
// double---> lf

    double sayi,sonuc1,sonuc2;

    printf("Degeri Girin: "); // Klavyeden alınan degeri nokta ile ayırın
    scanf("%lf",&sayi);

    sonuc1=floor(sayi); // floor=zeminden gelmektedir. Sayiyi alt'a yuvarla demek.
    printf("Sonuc: %.lf",sonuc1);
    printf("\n");

    sonuc2=ceil(sayi); // ceil=tavandan gelmektedir. Sayiyi üst'e yuvarlar.
    printf("Sonuc: %.lf",sonuc2);
    return 0;
}
