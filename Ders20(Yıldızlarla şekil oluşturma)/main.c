#include <stdio.h>

int main() {
    // Yıldızlarla şekil oluşturma
    // Yıldızlarla dik üçgen oluşturma
int i,j;
//iç içe döngü kullanıcaz
    for (int i=1;i<=5 ;++i) // Bu satırda adım sayısını belirliyoruz
    {
        for (int j=1;j<=i;++j) //burada i sayisi kadar her satırda yıldız oluşturuyor
        {
            printf("*");
        }
        printf("\n"); // Döngüden çıkıp sonraki adıma geçmesi için bunu koymamız lazım
    }


    return 0;
}
