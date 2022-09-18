#include <stdio.h>

int main() {
    int dizi[100];
    int i,sayi;

    printf("Eleman Sayisi: ");
    scanf("%d",&sayi);

    for (int i = 0;i<sayi;i++) //değerleri aldık
    {
        printf("Dizinin %d.degerini girin: ",i+1);
        scanf("%d",&dizi[i]);
    }
    printf("\n\n");
    printf("Dizi={");
    for (int i = 0; i < sayi;i++) //değerleri sıraladık
    {
        printf(" %d",dizi[i]);
    }
    printf(" }");










    return 0;
}
