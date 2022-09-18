#include <stdio.h>

int main()
{
    int satir,sutun;
    int i,j;

    printf("Satir Sayisini giriniz: ");
    scanf("%d",&satir);

    printf("Sutun sayisini giriniz: ");
    scanf("%d",&sutun);

    int matris[satir][sutun];

    for (i = 0; i<satir ; i++)
    {
        for (j=0; j<sutun ; j++)
        {
            printf("\n[%d][%d] --->",i+1,j+1); //indexte normalde 0 dan başlıyor fakat programı kullanan anlasın diye +1 ekliyoruz
            scanf("%d",&matris[i][j]);
        }

    }

    printf("\n");
    // Hafızada oluiturduğumuz matrisi yazdırıyoruz
    printf("Olusturdugunuz Matris: \n");

    for (i= 0; i<satir; i++)
    {
        for (j = 0;  j<sutun ; j++)
        {
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }














    return 0;
}
