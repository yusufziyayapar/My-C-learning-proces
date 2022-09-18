#include <stdio.h>

int main() {
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);

    if(sayi<=0)
    {
        if(sayi==0)
        {
            printf("Sayiniz 0'dir");
        }
        else{
            printf("Girdiginiz sayi negatiftir");
        }
    }
   else
    {
        printf("Girdiginiz sayi pozitiftir");
    }









    return 0;
}
