#include <stdio.h>

int main() {
  // Göstericilerde matematiksel işlemler

  char harf='a';
  char *pt=&harf;


    printf("Adres: %x\n",pt);

    pt++;

    printf("Adres2: %x\n",pt);

    pt--;

    printf("Adres3: %x\n",pt); // İşlemi her zaman bir önceki
    // değere göre yapar çünkü kod satırları sırayla okunur.

    pt=pt+5;

    printf("Adres4: %x",pt);


    return 0;
}
