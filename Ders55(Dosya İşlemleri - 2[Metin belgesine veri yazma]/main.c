#include <stdio.h>


int main() {
    // DOSYA oluşturalım
    FILE *dosya;
    dosya=fopen("C:\\Users\\Yavuz Selim\\Desktop\\bilgi2.txt","w");

    // İçerisine veri gönderelim
// putc komutunda iki parametre vardır.
// Birinci parametre yazdıracağımız mesaj diğeri ise yazdıralacağı dosya.
    putc('a',dosya);
    putc('\n',dosya);
    putc('b',dosya);

    fclose(dosya); // dosya ' daki okuma işlemini kapatlım
    // fclose : kapatma komutu.
    return 0;
}
