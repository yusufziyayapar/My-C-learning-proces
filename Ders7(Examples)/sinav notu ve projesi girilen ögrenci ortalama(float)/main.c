#include <stdio.h>

int main() {
    float s1,s2,s3,proje,ort;

    printf("Birinci Sinav: ");
    scanf("%f",&s1);

    printf("ikinci sinav: ");
    scanf("%f",&s2);

    printf("ucuncu sinav: ");
    scanf("%f",&s3);

    printf("Proje notu: ");
    scanf("%f",&proje);

    ort=(s1+s2+s3+proje)/4;

    printf("\n");

    printf("Ortalamaniz: %f",ort);







    return 0;
}
