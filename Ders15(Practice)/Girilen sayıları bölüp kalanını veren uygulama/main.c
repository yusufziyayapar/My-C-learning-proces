#include <stdio.h>

int main() {
  int bolunen,bolen,kalan,bolum;

    printf("Bolunen sayi: ");
    scanf("%d",&bolunen);

    printf("Bolen sayi: ");
    scanf("%d",&bolen);

    bolum=bolunen/bolen;
    kalan=bolunen%bolum;

    printf("Kalan: %d",kalan);


    return 0;
}
