#include <stdio.h>

int main() {
   // üs alma işlemleri power==>pow

   int x,y;
   int sonuc; // tam sayılarda işlem yapacağımız için sonucu int ile tanımladık

    printf("Taban: ");
    scanf("%d",&x);

    printf("Us: ");
    scanf("%d",&y);

    sonuc=pow(x,y); // Kullanımı: pow(taban,us) şeklindedir

    printf("Sonuc: %d",sonuc);




    return 0;
}
