#include <stdio.h>

int main() {
    //0'dan 100'e kadar olan sayıalrın 2 ve 7 ye tam bölünenlerini yazdıran uygulama
    int x;
    for(x=0;x<=100;x++)
    {
    if(x%2==0 && x%7==0)
    {
        printf("%d\n",x);
    }
    }












    return 0;
}
