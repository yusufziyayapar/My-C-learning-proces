#include <stdio.h>

int main() {

    int i,j,boy,boy2;

    printf("Boy degerini giriniz: ");
    scanf("%d",&boy);
    printf("2.Boy degerini giriniz: ");
    scanf("%d",&boy2);

    for (i = 0;  i<=boy ; ++i) {
        for (j=0;j <i ; ++j)
        {
            printf("*");

        }
        printf("\n");
    }


    for (i = 1; i <=boy2 ; ++i) {
        for (j =boy2; j>=i ; --j) {
            printf("*");

        }
        printf("\n");
    }




    return 0;
}
