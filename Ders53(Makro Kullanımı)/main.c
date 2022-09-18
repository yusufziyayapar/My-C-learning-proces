#include <stdio.h>
#define maksimum(s1,s2) (s1>s2) ? s1 : s2
#define karsilastirma(s3,s4) (s3<s4)
//#define maksimum açıklaması
 //s1,s2  - eğer s1 s2 eden büyük(s1>s2)  - sorgulatıyoruz (?) - büyük ise s1 i yazsın(s1)- aksi durumda(:)- s2 yazsın(s2)

 //#define karsilastirma
 // s3,s4 - s3 s4 ten küçük(s3<s4)
 //preprocessor oluşturduk




int main() {
    printf("%d\n", maksimum(5,7));
    printf("%d", karsilastirma(5,7));//tanımlamayı sadece s3<s4 e kadar yaptığımız için true yada false
    // şeklinde değer döndürüyor. 5 7 den küçük olduğu için 1 döndürecek.
    // Sayıların yerlerini değiştirirsek 0 döndürecek.


    return 0;
}
