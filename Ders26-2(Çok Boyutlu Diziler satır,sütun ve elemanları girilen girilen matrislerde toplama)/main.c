#include <stdio.h>

int main() {
    printf("\n<----------Matrislerde Toplama---------->\n");

    printf("\n");

    int satir,sutun;

    printf("Satir Sayisi: ");
    scanf("%d", &satir);

    printf("Sutun Sayisi: ");
    scanf("%d", &sutun);
//İlk matris;
    printf("\nilk Matris\n");
    int m1[satir][sutun];

    int i,j;

    for (i = 0; i < satir; i++)
    {
        for (j = 0; j < sutun; j++)
        {
            printf("\nMatris1 [%d][%d] ---> ",i+1,j+1);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("\n");

    //İkinci matris;
    printf("\nikinci Matris;\n");

    int m2[satir][sutun];

    int k,l;

    for (k = 0; k < satir; k++)
    {
        for (l = 0; l < sutun; l++)
        {
            printf("\nMatris2 [%d][%d] ---> ",k,l);
            scanf("%d", &m2[k][l]);
        }
    }
    printf("\n");

    //Toplama işlemi;
    int top[satir][sutun];

    int m,n;

    for (m = 0; m < satir; m++)
    {
        for (n = 0; n < sutun; n++)
        {
            top[m][n] = m1[m][n] + m2[m][n];
        }
    }

    //Yazdırma işlemi;
    printf("Toplam;\n");
    int x,y;

    for (x = 0; x < satir; x++)
    {
        for (y = 0; y < sutun; y++)
        {
            printf("%d  ", top[x][y]);
        }
        printf("\n");
    }
    printf("\n");




    return 0;
}
