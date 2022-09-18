#include <stdio.h>

int islem(int s1,int s2){
    if(s1>s2){
        printf("%d",s1);

    } else{
        printf("%d",s2);
    }
}

int main() {
  int x,y;
    printf("birinci sayi:");
    scanf("%d",&x);

    printf("ikinci sayi:");
    scanf("%d",&y);
    islem(x,y);

    return 0;
}
