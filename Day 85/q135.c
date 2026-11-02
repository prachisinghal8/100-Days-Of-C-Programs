#include <stdio.h>

int main()
{
    char a[100], b[100];
    int i=0;
    scanf("%99s%99s",a,b);
    while(a[i]&&b[i]&&a[i]==b[i])
    {
        putchar(a[i]);
        i++;
    }
    if(i==0)
        printf("-1");

    return 0;
}
