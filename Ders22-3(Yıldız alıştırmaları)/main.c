#include <stdio.h>

int main() {
    int i,j,uzunluk,k;

    printf("Taban Uzunluk: ");
    scanf("%d",&uzunluk);

    for ( i= 1; i<=uzunluk ; i++)
    {
        for (j = 1; j<=i ; j++)
        {
            for ( k=uzunluk-i;k>=0 && j==1;k--)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");

    }



    return 0;
}
