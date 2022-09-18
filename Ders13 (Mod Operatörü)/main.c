#include <stdio.h>

int main() {
/* 1-50 arasında 5 e tam bölünebilen sayılar
    int i;
    for(i=1;i<=50;i++)
    {
        if(i%5==0)
        {
            printf("%d\n",i);
        }
    } */

/*Girilen 3 basamaklı sayıyı basamaklarına ayıran program
   int sayi;

    printf("Sayiyi Girin: ");
    scanf("%d",&sayi);

    int birler,onlar,yüzler;

   yüzler=sayi/100;
    printf("Yuzler basamagi: %d\n",yüzler);

    onlar=sayi/10;
    onlar=onlar%10;
    printf("Onlar Basamgi: %d\n",onlar);

    birler=sayi%10;
    printf("Birler Basamagi: %d",birler); */

    int sayi,birler,onlar,yüzler;

    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);

    yüzler=(sayi/100)*100;
    printf("Yuzler Basamaginin degeri: %d\n",yüzler);
    onlar=sayi/10;
    onlar=(onlar%10)*10;
    printf("Onlar Basamaginin degeri: %d\n",onlar);
    birler=(sayi%10)*1;
    printf("Birler Basamaginin degeri: %d\n",birler);










    return 0;
}
