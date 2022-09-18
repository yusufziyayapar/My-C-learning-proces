#include <stdio.h>
// get : okuma - alma.
// EOF(END OF FILE) :  Dosya Sonu(Bu bir preprocessor)
int main(){

FILE *belge;
char karakter;
// 1)Dosya oluşturduk
// 2)bunu okumak için char formatında bir değişken tanımladık.
// 3)sonra do-while döngüsü oluşturduk çünkü belgenin sonuna kadar yani EOF'a kadar
// belgedekileri okuması için .
//4) okuduklarımızı yazdırmak için printf kullandık.
//5) fclose ile dosyadan çıkış yaptık.

belge= fopen("C:\\Users\\Yavuz Selim\\Desktop\\homework.txt","r");
    do {
        karakter= getc(belge); // belgeyi okutma komutu
        printf("%c",karakter); // okuduğunu yazma komutu
    } while (karakter!=EOF);
//do yani işlem gerçekleştikçe oku ve okuduğunu yaz eğer ki dosyanın sonuna geldiyse
// dosyadan çıkış yap.
fclose(belge);

 // do-while tanım: While içindeki şart sağlandığı
 //  sürece do komutunun altındakileri yap demiş oluyor.







    return 0;
}
