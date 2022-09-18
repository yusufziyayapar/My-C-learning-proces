#include <stdio.h> //Bu bir preprocessor
#define puan2 3.47 //(mat) puan2 ya
#define puan 2.19 //(Turkce) Puan yazdığımız zaman program direkt olarak 2.19 degerini atar.

// Ön işlemci komutları(Preprocessors) ve define kullanımı
// program derlenmeden önce devreye giren ve okunan şeyler

// DEFINE
// Define : bütün program içinde geçerli olabilecek tanımlama yapmamızı
//sağlar. Sabit değerlerin olduğu yapılarda define kullanılır.

int main() {
    int Turkce,Matematik;

    printf("Turkce Netiniz: ");
    scanf("%d",&Turkce);

    printf("Matetmatik Netini: ");
    scanf("%d",&Matematik);



    float sozelp,sayisalp;

    sozelp=Turkce*puan+Matematik*puan2+50.25;

    sayisalp=Turkce*puan+Matematik*puan2+51.45;

    printf("Toplam Sozel Puaniniz: %5.2f\n",sozelp);
    printf("Toplam Sayisal Puaniniz: %5.2f",sayisalp);
    
    
    return 0;
}
