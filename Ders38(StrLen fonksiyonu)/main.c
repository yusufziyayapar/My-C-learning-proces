#include <stdio.h>

int main() {
// StrLen fonkisoynu / str= string & Len=length=uzunluk
    char bilgi[40];

    printf("Merhaba Kelimesinin Uzunlugu: %d",strlen("Merhaba")); // Merhaba kelimesinin uzunlugunu yazdırdık
   // katar= dizinin içindeki veri
    printf("\n");

    //gets ve puts fonksiyonları ile strlen kullanımı
    printf("Bir cümle yaziniz: ");
    gets(bilgi);
    puts(bilgi);

    printf("Cümlenin uzunlugu: %d",strlen(bilgi));
    //strlen kelimenin uzunluğunu hesaplarken boşluk var ise
   // boşlukları da dahil ederek hesaplıyor

    return 0;
}
