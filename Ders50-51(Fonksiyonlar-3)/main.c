#include <stdio.h>
#include <math.h>

int kupbul(int sayi){
   int sonuc;
   sonuc=pow(sayi,3);
    return sonuc;
}
void dortgen(int kisa,int uzun)
{
    for (int i = 0; i <uzun ; ++i) {
        for (int j = 0; j <kisa ; ++j) {
            printf("*");
        }
        printf("\n");
    }
}
  int main() {
      printf("--Kup alma--\n\n");
    int s;
      printf("Bir sayi giriniz: ");
      scanf("%d",&s);

      printf("\nSayinin kubu: %d", kupbul(s));

      printf("\n\n");

      printf("--Dortgen Olusturma--\n\n");
      int x,y;

      printf(" Kisa kenari giriniz: ");
      scanf("%d",&x);

      printf("Uzun kenari giriniz: ");
      scanf("%d",&y);

      dortgen(x,y);

    return 0;
}
