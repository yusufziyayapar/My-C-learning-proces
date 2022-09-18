#include <stdio.h>

int main() {
  // 1)StrCpy = kaynağı direk olduğu gibi kopyalar
  // 2) StrnCpy = buradaki "n" kaynaktan kopyalancak verinin kaç karakterlik
  // olduğunu belirtir
  // 3) String Copy - String n copy
  // 4)Bir char ifadeyi kopyalayıp alt tarafta yeniden kullanmak için
  // hafızaya alan komut.(RAM'DE SAKLAR YANİ BELLEKTE)

  printf(">-StrCpy fonksiyonunu klavyeden girilen veri ile kullanimi-<");
    printf("\n");
  char kaynak[30]="";
  char kopya[30]="";
    printf("Bir bilgi giriniz: ");
    gets(kaynak); // kaynağa aldık bilgiyi

  strcpy(kopya,kaynak); // kaynaktaki veriyi kopyaya almış oluyoruz
                        // iki tane parametresi var.
                        // strcpy(nereye,nereden)
    puts(kopya);
    // Yukarıdaki kod satırında strcpy fonksiyonu ile
    // kopya degiskenine kaynaktaki veriyi
    // atadğımız için kopyayı yazdırınca kaynaktaki veri ekrana gelir.


    printf("\n\n");

    printf(">-StrnCpy fonksiyonunu klavyeden girilen veri ile kullanimi-<");
    printf("\n");
    char nereden[30]="";
    char nereye[30]="";

    printf("Bir bilgi giriniz: ");
    gets(nereden);

    strncpy(nereye,nereden,16);// nereden degiskenindeki verinin ilk 7 harfini nereye degiskenine kopyaladık.
    // Kullanımı aşşağıdaki gibidir:
    //strncpy(nereye,nereden,verinin ilk kaç harfinin alınacağı)

    puts(nereye);














    return 0;
}
