#include <stdio.h>

int main() {
  // Strcat : scanla klavyeden almış olduğumuz verileri birleştirmek için
  // kullanılır.

  char kitap[30];
  char yazar[30];
  char kitapyazar[60];

    printf("Kitap Adi ve Yazari Girin: ");
    scanf("%s%s",&kitap,&yazar);

    strcat(kitapyazar,kitap);//kitapyazar ile kitap adını birleştirdik yani kitabı sola aldık.
    strcat(kitapyazar," <-> ");// kitapyazar ile kitabı birleştirdikten sonra bu ok işaretinide yanlarına ekliyoruz.
    strcat(kitapyazar,yazar);// son olarak yazar ismini sona ekliyoruz.

    printf("\n\n");
    printf("%s",kitapyazar);





    return 0;
}
