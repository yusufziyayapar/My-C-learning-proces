#include <stdio.h>

int main() {
    char sehir1[15],sehir2[15],sehir3[15];
    int i;
    for (int i=0;i<3;i++)
    {
        switch (i)
        {
            case 0:
                printf("Sehiri girin: ");
                scanf("%s",sehir1);
                break;
            case 1:
                printf("Sehiri girin: ");
                scanf("%s",sehir2);
                break;
            case 2:
                printf("Sehiri girin: ");
                scanf("%s",sehir3);
                break;



        }


    }
    printf("Girdiginiz sehirler: %s  %s  %s",sehir1,sehir2,sehir3);

    
    
    
    
    return 0;
}
