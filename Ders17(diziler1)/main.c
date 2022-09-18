#include <stdio.h>

int main() {
    /* Dizi : aynı türden verilerin kümelenmesi durumunda
    verilerin bir arada tutulması için kullanılan yapılar.*/
    /* Kullanımı:
     * DeğikenAdi[]
     * Veriler={veri,ver,}
     * ' '
     * 1,2,3
     * Bursa
     * B u r s a
     * int[0]=x
     * diziadi[1]=y
     * Şehirler=İstanbul,Ankara,İzmir,Bursa,Adana
     * Öğrenviler=Ali,Ayşe,Ahmet,Emel bunlar karakterli diziler.
     * Tek Rakamlar=1,3,5,7,9
     * Çift Rakamlar=0,2,4,6,8
     * Otobüsteki Koltuk Numaları=.... ---->Bu da bir dizidir.
     * int sayilar; -->Degisken
     * int sayilar[];---->Dizi olduğunu "[]" bu sembol belirtir.
     * Dizi sembolu=[]
     * index--->Dizilerdeki eleman sırası
     * indexin başlangıç değeri= 0
     * ------------------------------------------
         0  |    1     |   2      |          | ---->Dizinin adresi
     * ------------------------------------------
         125 |   356    |  478    |         |  ------>Adrese ait değer
     * ------------------------------------------ */
//ÖRNEK:
  /*  int tekrakamlar[]={1,3,5,7,9};//Dizi saymaya 0'dan başlar o yüzden 3.eleman "7" dir.
    printf("%d",tekrakamlar[0]);//----->3. indexteki elemani yazdir.*/


 // char sehir[6]={'a','n','k','a','r','a'};
//    printf("%s",sehir);

int sayilar[4];
sayilar[0]=24;
sayilar[1]=895;
sayilar[2]=774;
sayilar[3]=662;
    printf("%d",sayilar[2]);//--> 2.ci indexteki değeri verdi




    return 0;
}
