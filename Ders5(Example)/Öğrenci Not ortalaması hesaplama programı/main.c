#include <stdio.h>
#include <stdlib.h>


int main() {
	
	
char Ad[15],Soyad[10];
  int s1,s2,s3,ort;

printf("----------Not Ortalamasi Hesaplama----------");
printf("\n\n");

	printf("Adiniz: ");
	scanf("%s",Ad);
	printf("Soyadiniz: ");
	scanf("%s",Soyad);
	
	
	
	printf("Birinci sinav: ");
	scanf("%d",&s1);
	
	printf("ikinci sinav: ");
	scanf("%d",&s2);
	
	printf("ucuncu sinav: ");
	scanf("%d",&s3);
	
	ort=(s1+s2+s3)/3;

	printf("\n\n");
	
	printf("Adi Soyadi: %s %s\n",Ad,Soyad);
	
	printf("Ortalamaniz: %d",ort);
	
	printf("\n\n");
	
	printf("----------Not Ortalamasi Hesaplama----------");
		
	
	
	
	
	
	return 0;
}
