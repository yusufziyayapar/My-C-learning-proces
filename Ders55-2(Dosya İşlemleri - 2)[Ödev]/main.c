#include <stdio.h>

int main() {
   FILE *homework;
   homework= fopen("C:\\Users\\Yavuz Selim\\Desktop\\homework.txt","w");

    fputs("Ad soyad: Yusuf Ziya Yapar",homework); // fputs birden çok karakter için kullanılır.
    putc('\n',homework); // putc tek karakter için kullanılır.
    fputs("Yas: 19",homework);
    putc('\n',homework);
    fputs("Dogum Tarihi: 08.03.03",homework);
    putc('\n',homework);
    fputs("Anne ad: Merve",homework);
    putc('\n',homework);
    fputs("Baba ad: Semih",homework);
    putc('\n',homework);
    fputs("Okul: Bahcesehir University",homework);

    fclose(homework);




    return 0;
}
