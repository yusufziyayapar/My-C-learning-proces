#include <stdio.h>
//Ders 54 Dosya İşlemleri - 1 Metin Belgesi Oluşturma
//IO Açıllımı:
// input--> giriş
//output--> çıkış
//file(DOSYA)---> dosya / f
//put ---> yazdırma
//open --->açma
//close ---> kapatma
//write --->yazma / w
//read ---> okuma / r
//add ---> ekleme / a
//fopen --->dosyayı açma komutu
// programın adresini belirtmek için adresin başına çift sılaş(\\) eklemem gerekiyor
///gösterici 2 tane parametreyi alması gerekiyor 1. parametre adresi tutacak
//2.parametre bunun görevini tutacak
//tek sılaş ile çift sılaş arasındaki fark nedir
//cevap:hocam yazı içinde "\" kullanmak için "\\" kullanmak zorundayız.Çünkü yazi icinde komut kullanmak istedigimiz zaman "\" bu sembolü kullanırız.Örnek:"\n"
//Bu sembolü komut sembolünden ayırmak için.Çift slash kullanırız.


int main() {
    // Masaüstüne bir dosya oluşturalım.
    FILE *dosya;//yıldız ile(*) pointer(gösterici) olarak tanımlamam gerekiyor
    dosya=fopen("C:\\Users\\Yavuz Selim\\Desktop\\Ders54.txt","w");
    //(dosyaya oluturacagım alanı ve buna bir isim vermemiz gerekiyor)


    return 0;
}
