#include <stdio.h>

int main() {
  // Pointer(Göstericiler): Bellekle program arasında bağlantı kurma
  //işlemelrinde kullandığımız yapı.
  // Herhangi bir değişkenin kendisiyle yada adresiyle işlem yapmasını sağlar.
  // Bir değişkenin bellekteki adresleri üzerinde işlem yapmamıza yarar.

  // adres operatörü olarak kullanıla sembol "&"

  int sayi=10;
  int sayi2=20;
  double sayi3=10.25;
  char Kelime='a';

    printf("%d\n",sayi);
    printf("%d\n",sayi2);
    printf("%.2lf\n",sayi3);
    printf("%c",Kelime);

    printf("\n\nBellek Adresleri \n\n");

    printf("%x\n",&sayi);
    printf("%x\n",&sayi2);
    printf("%x\n",&sayi3);
    printf("%x\n",&Kelime);


    return 0;
}
