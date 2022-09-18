#include <stdio.h>

int main() {
    /* Matriste çarpma işlemi yaptırırken 1. matrisin sütunu ile
     2. matrisin satır sayısının eşit olması lazım. Örneğin matris1 2×3 boyutunda
     ise matris iki 3×5 olabilir. Burdaki 3 lerin ortak olma şartı vardır.
      Yeni oluşacak matris ise 2×5 boyutunda olur.*/

     //Satır ve sütun değerlerini kullanıcıdan alalım
     int satir1,sutun1,sutun2,toplam=0;

    printf("1.Matrisin satir Degerini Giriniz: ");
    scanf("%d",&satir1);

    printf("1.Matrisin sutun degerini giriniz: ");
    scanf("%d",&sutun1);

    printf("2.Matrisin sutun degerini giriniz: ");
    scanf("%d",&sutun2);

    int matris1[satir1][sutun1],matris2[sutun1][sutun2];
    int carpim[satir1][sutun2];

    // 1 ve 2. Matrisi Kullanıcıdan alalım
    for (int i = 0; i <satir1 ; ++i)
    {
        for (int j = 0; j <sutun1 ; ++j)
        {
            printf("1.matris[%d][%d]--> ",i+1,j+1);
            scanf("%d",&matris1[i][j]);

        }
    }

    for (int h = 0; h <sutun1 ; ++h) {
        for (int g = 0; g < sutun2; ++g) {
            printf("2.matris[%d][%d]--> ",h+1,g+1);
            scanf("%d",&matris2[h][g]);

        }

    }

    printf("\n");

    // 2 matrisi çarpar ve ekrana yazdırır

    for (int x = 0; x < satir1; ++x)
    {
        for (int y = 0; y < sutun2; ++y)
        {
            for (int z = 0; z < sutun1; ++z)
            {
                toplam+= matris1[x][z]*matris2[z][y];
            }
            carpim[x][y]=toplam;//Çıkan sonuc dizinin elemanı olarak yazılır.
            toplam=0;//Toplam tekrar kullanılacağı için 0 a eşitlenir
            printf("%d ", carpim[x][y]);
        }
        printf("\n");
    }
    printf("\n");
    system("pause");


    return 0;
}
