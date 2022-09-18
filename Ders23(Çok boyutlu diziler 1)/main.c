#include <stdio.h>

int main() {
    // Çok boyutlu dizilerde satır ve sütun eleman sayılarının tanımlamasını yapcağız
    // Kullanım yapısı: int dizi[x][y] ---> iki boyutlu bir dizi  x : satır y: sütun
    // Örnek olarak Satranç ve dama tahtasının oluşturulması için çok boyutlu diziye ihtiyac var.

    //      [satır][sütun]
    int dizi[2][2];  // 2 satır 2 sütundan oluşan bir matris olmuş oldu.
     dizi[0][0]=10; // 0 a 0 daki eleman 10 yaptık.
     dizi[0][1]=20;
     dizi[1][0]=30;
     dizi[1][1]=40;
// bunları hafıdaza oluşturdu

    printf("Matrisin 0-0 da bulunan elamani: %d\n",dizi[0][0]);
    printf("Matrisin 0-1 da bulunan elamani: %d\n",dizi[0][1]);
    printf("Matrisin 1-0 da bulunan elamani: %d\n",dizi[1][0]);
    printf("Matrisin 1-1 da bulunan elamani: %d\n",dizi[1][1]);



    return 0;
}
