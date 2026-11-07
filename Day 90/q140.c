#include <stdio.h>

int main()
{
    char s[50];
    int i, n=0;
    scanf("%49s",s);
    for(i=0;s[i];i++)
        n=n*2+(s[i]-'0');
    printf("%d",n);

    return 0;
}
