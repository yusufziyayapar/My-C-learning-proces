#include <stdio.h>
#include <stdlib.h>


int main() {
	/* Mýsýr: 2TL 
	Kola: 2TL
	Su: 1TL
	Bilet: 8TL */
	
	int su,kola,bilet,misir,toplam;
	
	printf("Misir Adedi: ");
	scanf("%d",&misir);
	
	printf("Kola Adedi ");
	scanf("%d",&kola);
	
	printf("Su Adedi: ");
	scanf("%d",&su);
	
	printf("Bilet Adedi: ");
	scanf("%d",&bilet);
	
	toplam=misir*2+kola*2+su*1+bilet*8;
	
	printf("Toplam Borcunuz: %d",toplam);
	printf("TL...");
	
	
	
	
	
	

	
	
	return 0;
}
