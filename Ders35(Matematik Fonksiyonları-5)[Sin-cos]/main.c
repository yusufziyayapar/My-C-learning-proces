#include <stdio.h>

int main() {
// Sin ve cos islemleri

double derece,sonucsin,sonuccos;

    printf("Bir derece giriniz: ");
    scanf("%lf",&derece);

    sonucsin=sin(derece);
    printf("Sinus: %lf\n",sonucsin);

    sonuccos=cos(derece);
    printf("Cosinus: %lf",sonuccos);


    return 0;
}
