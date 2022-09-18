#include <stdio.h>

int main() {
    // stringde biçimlendirilmiş kullanımlar
    char kitap[40];
    printf("Ad: ");
    scanf("%s",kitap);

    printf("%s",kitap);

    printf("\n");

    printf("%20s",kitap);
    //Yukarıda bırakmak istediğimiz boşluk sayısından
    // girilen kitabın karakter sayısını çıkartıp aradaki fark kadar bosluk
    // bırakıyor.

    // Diğer bir deyişle mesela yukarıda 18 sayısını girmişiz kitabın
   // karakter sayısını dahil ederek boşluklarla 18 e tamamlıyor.
    printf("\n");
    printf("%20.3s",kitap);
    // yukarıda girilen kitabın karakter sayisini dahil ederek
    // bosluklarla 20 ye tamamlıyoruz ama ".3" eklediğimiz zaman
    // girilen verinin ilk 3 karakterini dahil ederek 20 ye boşluklarla
    // tamamlıyor
    printf("\n");
    printf("%-20s",kitap);
    // Yukarıdaki eksi ile yine 20 karaktere bosluklarla tamamlanıyor
    // ama sola yatık şekilde.
    // Kısacası önce veriyi yazdırıp sonra boslukları oluşturdu.
    return 0;
}
