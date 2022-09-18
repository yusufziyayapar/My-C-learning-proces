#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char Ad[20],Soyad[20],Yas[2],Sehir[13],Meslek[10];
	
	printf("Adiniz: ");
	scanf("%s",Ad);
	
	printf("Soyadiniz: ");
	scanf("%s",Soyad);
	
    printf("Yasiniz: ");
    scanf("%s",Yas);
    
    printf("Sehriniz: ");
    scanf("%s",Sehir);
    
    printf("Mesleginiz: ");
    scanf("%s",Meslek);
     
	 printf("\n");
	 	
	printf("Adi: %s - Soyadi: %s\n",Ad,Soyad);
	printf("Yasi: %s\n",Yas);
	printf("Meslek: %s - Sehir: %s\n",Meslek,Sehir);
	
	
	
	
	
	
	
	
	
	return 0;
}
