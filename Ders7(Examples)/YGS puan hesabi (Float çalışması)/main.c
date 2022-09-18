#include <stdio.h>

int main() {
    //Ygs 1 puan türü hesaplama
    // Türkçe: 1.999
    // Matematik: 3.998
    //sosyal: 1
    //Fen: 2.999
    //taban:100.160
    printf("**********YGS Puan Hesabi***********");
    printf("\n\n");

    float turkce,matematik,fen,sosyal,taban,toplampuan;

    taban=100.160;

    printf("Turkce netiniz: ");
    scanf("%f",&turkce);

    printf("Matematik netiniz: ");
    scanf("%f",&matematik);

    printf("Sosyal Bilgiler netiniz: ");
    scanf("%f",&sosyal);

    printf("Fen Bilgisi netinzi: ");
    scanf("%f",&fen);

    toplampuan=turkce*1.999+matematik*3.998+sosyal*1+fen*2.999+taban;
    printf("Ygs-1 Puan Turunde Sonucunuz: %f",toplampuan);



    return 0;
}
