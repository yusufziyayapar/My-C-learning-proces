#include <stdio.h>

int main() {
    printf("----------Dikdortgenin Alan Ve Cevresi----------");
    printf("\n\n");

     float kisa,uzun,alan,cevre;

     printf("Kisa Kenari giriniz: ");
     scanf("%f",&kisa);

     printf("Uzun Kenari giriniz: ");
     scanf("%f",&uzun);

     alan=kisa*uzun;
     cevre=(kisa+uzun)*2;

     printf("Alan: %f\n",alan);
     printf("Cevre: %f",cevre);










    return 0;
}
