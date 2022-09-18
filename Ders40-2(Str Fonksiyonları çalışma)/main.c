#include <stdio.h>

int main() {
 //  Example: All Str function
    printf(">- Strcat Example -<\n");
  char str1[100]="",str2[100]="",str3[100]="",str4[100]="";

    printf("enter something consisting of two words: ");
    scanf("%s%s",str1,str2);

  strcat(str1," "); // boşluğu str1 in yanına taşı ve birleştir kodu
  strcat(str1,str2); // str2 yi str1 in yanına taşı ve birleştir kodu

    printf("%s - Number of letters: %d",str1,strlen(str1)-1);
    printf("\n");

    strncpy(str3,str1,10);
    printf("%s - Number of letters: %d",str3,strlen(str3));



    return 0;
}
