#include <stdio.h>

int main() {
    // Gösterici tanımlayıp göstericinin kendisini yazdıracağız.
    // Bir değişkenin önünde eğerki * sembolu var ise onun
   // bir gösterici olduğunu ve bellek adresi tutacağını bize ve
  // programa bildirir.
  int sayi;
  int *s=&sayi;  // "s"=(Gösterici,pointer değişken) "sayi"nin bellek adresini tutacak.
    //Bir Sayı alıyoruz
    printf("Bir Deger Giriniz: \n");
    scanf("%d",&sayi);
  // Sayıyı Ekrana Yazdırma
    printf("Deger:%d\n",sayi);

    // Adresi Ekrana Yazdırma
    printf("Adres: %x",s);

    printf("\n\n");

    char harf;
    char *h=&harf;
    //Harf alıyoruz
    printf("Bir Harf Girin: \n");
    scanf("%s",&harf);

    //Harfi Ekrana Yazdırma
    printf("Harf: %s\n",harf);

    //Adresi Ekrana Yazdırma
    printf("Adres: %x\n",&h);

    printf("<|-----------------------------------------|>");



    return 0;
}
