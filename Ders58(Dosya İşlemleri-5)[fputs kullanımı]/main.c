#include <stdio.h>

//fputs : toplu yazma komutu

int main() {

    FILE *metinbelgesi;
    char veri1[20]="Bilgisayar ";
    char veri2[20]="Muhendisligi ";
    char veri3[20]="Bolumu ";

    metinbelgesi= fopen("C:\\Users\\Yavuz Selim\\Desktop\\bilgi.txt","w");

    fputs(veri1,metinbelgesi);
    fputs(veri2,metinbelgesi);
    fputs(veri3,metinbelgesi);

    fclose(metinbelgesi);


    return 0;
}
