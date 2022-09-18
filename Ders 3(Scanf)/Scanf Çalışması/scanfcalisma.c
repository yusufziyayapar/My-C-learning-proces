#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char kitapad[4],kitapyazar[20],sayfasayi[3],basimtarih[4],basimev[20],tur[10];
	  
printf("----------Kitap Kayit Formu----------");
 printf("\n\n");
	
      printf("Kitabin Adini Giriniz: ");
      scanf("%s",kitapad);
      
      printf("Kitabin Yazarini Giriniz: ");
      scanf("%s",kitapyazar);
      
      printf("Kitabin Sayfa Sayisi: ");
      scanf("%s",sayfasayi);
      
      printf("Kitabin Basim Tarihi: ");
      scanf("%s",basimtarih);
      
      printf("Kitabin Yayin Evi: ");
      scanf("%s",basimev);
      
      printf("Kitabin Turu: ");
      scanf("%s",tur);
      
      printf("\n\n");
      
      printf("Kitabin Adi: %s\n",kitapad);
       printf("Kitabin Yazari: %s\n",kitapyazar);
        printf("Sayfa Sayisi: %s\n",sayfasayi);
         printf("Basim yili: %s\n",basimtarih);
          printf("Yayin Evi: %s\n",basimev);
           printf("Turu: %s\n\n",tur);
            
         
      

	
	
	
	
	
	return 0;
}
