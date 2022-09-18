#include <stdio.h>

int main() {
// Girdiğimiz boyutlarda kelebek kanadı oluşturan program
    int sayi,i,j,k,l;

    printf("Boyut Girin: ");
    scanf("%d",&sayi);

    for ( i = 1; i <=sayi ; ++i)
    {
        for (j = 1; j <=i ; ++j)
        {
            printf("*");
        }
        printf("\n");



    }
    for(k=1;k<=sayi;k++)
    {
        for ( l=sayi; l>=k ; l--)  // ters dik üçgen olacağı için ilk satırda boyutu kadar yıldız olması lazım bu yüzden içerdeki yıldız sayisini belirleyen döngüde değişkeni "sayi" değerine eşitrliyoruz.
        {
            printf("*");

        }
        printf("\n");
    }


    return 0;
}
