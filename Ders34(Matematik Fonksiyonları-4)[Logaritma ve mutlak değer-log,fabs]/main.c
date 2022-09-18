#include <stdio.h>

int main() {
   // -----------Mutlak değer ve logaritma hesaplamaları-----------
   // Mutlak Değer:Absolute value

   double sayi1,sayi2,sonuc,sonuc2;

    printf("Mutlak Degeri Alinacak Sayiyi giriniz: ");
    scanf("%lf",&sayi1);
    printf("Logaritmasi Alinacak Sayiyi Giriniz: ");
    scanf("%lf",&sayi2);
    sonuc=fabs(sayi1); //fabs= floating absolute
    printf("Mutlak Degeri: %.lf\n",sonuc);

    sonuc2=log10(sayi2); // Logaritma Hesabı
    printf("Logaritmasi: %.7lf",sonuc2);
    //log() fonksiyonu, tabanı e=2.71828182846
    // olan doğal logaritma değerlerini bulmak için kullanılır.

    // logX(Logaritması alınacak sayı) ---->kullanımı bu şekildedir
    // Yukarıdaki kullanımda X yerine logaritmanın hangi tabanda
    // alınacağı yazılır.
    // Örnek/ log10(sayi)---> sayinin 10 tabanında logaritmasını alır.





    return 0;
}
