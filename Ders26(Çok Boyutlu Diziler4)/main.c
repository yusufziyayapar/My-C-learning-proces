#include <stdio.h>

int main()
{
    // matrislerde toplama işlemi gerçekleştirirken iki matrisin ölçüleri aynı olamlıdır.
 /* mesela A matrisini [0][0] ındaki elemanla B matrisinin[0][0]ındaki eleman toplanıp
 C matrisinin [0][0] ındaki konuma yazdırılacak */

 int m1[2][2]={10,12,15,18}; //M1 matrisini oluşturduk
 int m2[2][2]={8,11,14,6};
 int toplam[2][2];

 int i,j,k,l;

    for (i=0;i<2; i++)
    {
        for (j= 0;  j< 2; j++)
        {
         toplam[i][j]=m1[i][j]+m2[i][j];
        }
    }

    for (k = 0; k <2 ; ++k)
    {
        for (l = 0;  l< 2; l++)
        {
            printf("%d  ",toplam[k][l]);
        }
        printf("\n");
    }











    return 0;
}
