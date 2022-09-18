#include <stdio.h>
// Enum kısmı main'in üstünde olur.
// Enum yapısı
// Bazen karar mekanızmamız çok dallanma yapabilir çok şartlı durumlar
// olabilir. Bu durumlarda enum yapısını kullanıyoruz.

// 81 il ve plaka eşlemesi yapan uygulama
enum sehirler
{
    Adana=1,Adiyaman,Afyon,Agri,
    Amasya,Ankara,Antalya,Artvin,Aydin,
    Balikesir,Bilecik,Bingol,Bitlis,Bolu,
    Burdur,Bursa,Canakkale,Cankiri,Corum,
    Denizli,Diyarbakir,Edirne,Elazig,Erzincan,Erzurum,
    Eskisehir,Gaziantep,Giresun,Gumushane,Hakkari,
    Hatay,Isparta,Mersin,Istanbul,Izmir,Kars,Kastamonu,
    Kayseri,Kirklareli,Kirsehir,Kocaeli,Konya,Kutahya,
    Malatya,Manisa,Kahramanmaras,Mardin,Mugla,Mus,Nevsehir,
    Nigde,Ordu,Rize,Sakarya,Samsun,Siirt,Sinop,Sivas,Tekirdag,
    Tokat,Trabzon,Tunceli,Sanliurfa,Usak,Van,Yozgat,Zonguldak,
    Aksaray,Bayburt,Karaman,Kirikkale,Batman,Sirnak,Bartin,Ardahan,
    Igdir,Yalova,Karabuk,Kilis,Osmaniye,Duzce

};
// Normalde index saymaya 0 dan başlar ama enum içinde ilk terimi 1'e eştlerseniz
// saymaya 1 den başlar.
// yada en başa boş bir terim atama yaparız.
// veyada main içinde il+1 eklemesini yaparız.
int main() {

    enum  sehirler il,il2,il3;
  il=Trabzon;
    printf("Trabzon - %d\n",il);
    il2=Bursa;
    il3=Erzurum;
    printf("Bursa - %d\n",il2);
    printf("Erzurum - %d",il3);

    return 0;
}
