#include <stdio.h>

int main() {
  /* Switch Case genel kullanım mantığı
   int sayi;

    printf("Lutfen Ay Numarasi giriniz: ");
    scanf("%d",&sayi);

    switch (sayi)
    {
        case 1:printf("Ocak\n"); break;
        case 2:printf("Subat\n");break;
        case 3:printf("Mart\n");break;
        case 4:printf("Nisan\n");break;
        case 5:printf("Mayis\n");break;
        case 6:printf("Haziran\n");break;
        case 7:printf("Temmuz\n");break;
        case 8:printf("Agustos\n");break;
        case 9:printf("Eylul\n");break;
        case 10:printf("Ekim\n");break;
        case 11:printf("Kasim\n");break;
        case 12:printf("Aralık\n");break;
        default:printf("Hatali Sayi Girisi"); break;
    } */

  char ders[3];

    printf("Ders Kodu: ");
    scanf("%s",&ders);

    switch(ders[3])
    {
        case 't':printf("Turkce"); break; // tek karakter girileceği için tek tırnak kullandık
        case 'm':printf("Matematik"); break;
        case 's':printf("Sosyal Bilgiler"); break;
        case 'f':printf("Fen Bilgileri"); break;
        default:printf("Hatali ya da Buyuk harf girisi"); break;
    }





    return 0;
}
