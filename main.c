#include <stdio.h>
#include <stdlib.h>

void alphabet_or_not(char ch)
{
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
       printf("alphabet\n");
       else
        printf("not a alphabet\n");

}

int main()
{
    char ch;
    printf("enter any character:");
    scanf("%c",&ch);
    printf("%c is ",ch);
    alphabet_or_not(ch);


    return 0;
}
