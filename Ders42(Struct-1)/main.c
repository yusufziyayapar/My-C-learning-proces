#include <stdio.h>
// Struct(yapı)= Aralarında mantıksal ilişki olan fakat farklı türde olan
//bilgilerdir ama veri tipleri , değişkenler birbirinden farklıdır.
// Genelde main kısmısının üstüne yazılır.

//Kitabın adı , yazarı ,puanı ve fiyatı

struct kitapbilgi
{
    char kitapad[20];
    char yazar[20];
    int fiyat;
    float puan;
};
int main() {
   struct kitapbilgi kb={"SekerPortakali","Vasconceulos",10,7.25};

    printf("Kitap Adi: %s\n",kb.kitapad);
    printf("Yazar: %s\n",kb.yazar);
    printf("Fiyat: %d\n",kb.fiyat);
    printf("Puan: %.2lf",kb.puan);




    return 0;
}
