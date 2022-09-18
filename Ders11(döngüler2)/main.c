#include <stdio.h>

int main() {
   /* int sayac=0; //sayac sürekli i değişkeni ile toplayacağımız değişken
    int i;

    for(i=1;i<=10;i++)
    {
        sayac=sayac+i; // sayacı dögünün içine yazıyoruz ki döngü devam ederken toplama işlemi devam ediyor
        // sayaç her defasında kendi değerinin üstüne i değerine koyarak devam eder.
    }
    printf("Sayac= %d",sayac); */
//----------------------------------------------------------
   // faktoriyel hesaplama


   int faktoriyel=1,i,sayi;
    printf("Faktoriyeli alinacak sayi: ");
    scanf("%d",&sayi);

    for(i=1;i<=sayi;i++)
    {
        faktoriyel=faktoriyel*i;
    }
    printf("Sonuc: %d",faktoriyel);


    return 0;
}
