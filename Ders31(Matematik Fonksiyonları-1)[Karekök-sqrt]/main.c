#include <stdio.h>

int main() {
 // kök alma , kare alma, alta üstü yuvarlama , cos sin bulma,mutlak deger
 //bulma.. gibi Matematik Fonksiyonlarıni göreceğiz.

 // Klavyeden girilen sayının kare kökünü bulma

 int sayi;
 double sonuc; // genelde sonucları float yada double ile okuturuz.

    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    sonuc=sqrt(sayi); // sqrt karekök alma kodunu yaz ve parantez içine karekökü alınacak sayı girilir
    printf("Sonuc: %.4f",sonuc);
// % sembolünü tam sayı olarak düşünürsek . dan sonraki 4f
// sonucun tam sayı kısmından sonra kaç basamak daha yazdırlacağını belirler.











    return 0;
}
