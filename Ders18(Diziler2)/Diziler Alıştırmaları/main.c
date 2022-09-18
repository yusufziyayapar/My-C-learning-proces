#include <stdio.h>

int main() {
    char soyad[10];
    int i;
    soyad[0]='B';
    soyad[1]='A';
    soyad[2]='Y';
    soyad[3]='R';
    soyad[4]='A';
    soyad[5]='K';
    soyad[6]='T';
    soyad[7]='A';
    soyad[8]='R';
    soyad[9]=0;
    printf("Soyadi %s dir.\n",soyad);
    printf("icinden bir karakter: %c\n",soyad[2]);
    printf("Soyadinin bir parcasi: %s \n",&soyad[3]);//gemici düğümü atınca o index ve sonrasını yazdırır

    for (int i=0;i<10;i++)
    {


    }






    return 0;
}
