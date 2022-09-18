#include <stdio.h>

int main() {

    int i,j,k,l;

    for (int i =1; i <=10 ; ++i) // buradaki i'den büyük eşit verdiğimiz sayı piramidin ortasındaki ve en çok yıldız içeren satırıdır.
    {
        for (int j = 1; j <=i; ++j)
        {
            printf("*");
        }
        printf("\n");

    }

    for ( i = 1; i <=10 ; ++i)
    {
        for (j=10;j>i;j--) // Ters Dik üçgen için ise J yi bu sefer 5 ten başlatıyoruz azaltıyoruz
                               // ve i den büyük olana kadar götürüyoruz
        {
            printf("*");
        }
        printf("\n");
    }










    return 0;
}
