#include <stdio.h>
#include <string.h>

int main()
{
    char a[200], b[100];
    fgets(a, 200, stdin);
    fgets(b, 100, stdin);
    a[strcspn(a,"\n")]=0;
    b[strcspn(b,"\n")]=0;
    char *p=strstr(a, b);
    if(p)
        printf("%ld",p-a);
    else printf("-1");

    return 0;
}
