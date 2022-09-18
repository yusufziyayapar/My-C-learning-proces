#include <stdio.h>
// FONKSİYONLAR

// Kendi fonksiyonlarımızı oluşturacağız.
// Fonksiyonlar kod yükünü ve kalabalğını azaltır.
// Öyle bir komut yazacağız ki tekrar çağırdığımızda bize o işlemleri
// Yapacak.
// Geriye değer döndüren ve döndürmeyen fonksiyonlar olarak ikiye ayrılır.

// GERİYE DEĞER DÖNDÜREN FONKSİYONLAR
//Geriye değer döndürmeyen fonksiyonlar için "void" kullanacağız.

void listele()// Parantezi açıp kapatıyoruz ki bunu bir fonksiyon olduğunu anlasın program
{
    printf("Ali Yildiz\n");
    printf("Ayse Ozturk\n");
    printf("Yusuf Ziya\n");
    printf("Yavuz Selim\n");
    printf("Yagiz Ensar\n");
} // listele diye bir fonksiyon oluşturduk ve bunun içine değerler atadık

int main() {
 listele();
    return 0;
}
// Bu fonkisyon kod kalabalığını önler ve bazı durumlarda çok tekrarlayan
// şeyleri tekrar tekrar yazmamızı önlemiş olur.