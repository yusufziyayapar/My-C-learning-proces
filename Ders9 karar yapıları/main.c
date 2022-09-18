#include <stdio.h>


int main() {

 // Klavyeden girilen dereceye göre suyun durumunu yazdıran programı kodlayın
 int su;
 printf("-----Suyun Durumu-----\n\n");

    printf("Sicaklik Degerini Girin: ");
    scanf("%d",&su);

    if(su<=0){
        printf("Su suanda buz halinde");
    }
if(su>0 && su<100)
{
    printf("Su sivi halde");
}
if(su>=100)
{
    printf("Su buhar halinde");
}



    return 0;
}
