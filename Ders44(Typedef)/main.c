#include <stdio.h>
// Typedef= type definition Kullanım

 typedef int d1; //
 // Bir değişkenden yine aynı TÜRDE
 // başka bir değişken
 // oluşturmaya yarıyor.

int main() {
d1 toplam;
d1 d2;
d1 d3;
// Not: d1 'i typedef'te kullandığımız ve başka değişkenler türetirken
//kullandığımız için hiçbir şekilde işleme sokamyıoruz.
    printf("Deger 2 yi girin: ");
    scanf("%d",&d2);
    printf("Deger 3 u girin: ");
    scanf("%d",&d3);

    toplam=d2+d3;

    printf("%d",toplam);









    return 0;
}
