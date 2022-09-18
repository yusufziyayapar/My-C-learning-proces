#include <stdio.h>
//Struct çalışması+
struct dizibilgi
{
    char diziad[30];
    char diziyayintarihi[30];
    char dizitur[30];
    int dizisezon;
    int dizibolum;
    float dizipuan;
};

int main() {
    struct dizibilgi db={"Brooklyn Nine-Nine","17 September 2013","Comedy",8,153,8.4};
    printf("Dizi adi: %s\n",db.diziad);
    printf("ilk yayin tarihi: %s\n",db.diziyayintarihi);
    printf("Turu: %s\n",db.dizitur);
    printf("Sezon Sayisi: %d\n",db.dizisezon);
    printf("Bolum Sayisi: %d\n",db.dizibolum);
    printf("Puani: %.1lf\n",db.dizipuan);
    return 0;
}
