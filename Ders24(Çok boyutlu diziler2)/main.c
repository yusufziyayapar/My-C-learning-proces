#include <stdio.h>

int main() {
    // ilk önce satır elemanalrı syntaxta sayııyor sonrasında ikinci satır
    // yani 10 20 30 ilk satır 40 50 60 ikinci satır.
    int matris[2][3]={10,20,30,40,50,60};
    int i,j;

    for (i= 0;  i<2; i++) // satırları okutuyoruz
    {

        for (j = 0; j <3 ; j++) // sütunları okutuyoruz
        {
            printf("  %d",matris[i][j]);

        }
        printf("\n");
    }





    return 0;
}
