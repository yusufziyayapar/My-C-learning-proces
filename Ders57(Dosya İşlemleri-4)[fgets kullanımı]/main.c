#include <stdio.h>
// Verilerin topluca okunması ve topluca yazılması.

// fgets : toplu okuma - üç durumda sonlanıyor.
// belirlediğimiz karakterde okuma yapıyor
//yeni satır karakterine gelince sonlanur.

// fputs :  toplu yazma
int main() {
FILE  *belge;
char karakter[50];
belge=fopen("C:\\Users\\Yavuz Selim\\Desktop\\homework.txt","r");

    fgets(karakter,50,belge); // toplu okuma komutu
    puts(karakter); // okuduklarımızı yazdırma komutu
    // fgets üç parametreden oluşur.
    // (yazılanları atayacağımız değişken,okunacak karakter sayısı,dosya)

    fclose(belge);



    return 0;
}
