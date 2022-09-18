#include <stdio.h>
// FONKSİYONLAR - 2
// Geriye değer döndüren fonksiyonlar
// Değişken türü belirlenir

int toplam(int s1,int s2){

    int s3;
    s3=(s1+s2)*5-10;
    return s3; // Burada geriye dönecek değer s3 olacak
}

int main() {
    printf("2 sayinin toplaminin 5 ile carpilip 10 cikarilma islemi \n\n");
    int t;
    t= toplam(4,5);
    printf("%d\n",t);

    t= toplam(2,3);
    printf("%d\n\n",t);





    return 0;
}
