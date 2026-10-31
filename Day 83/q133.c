#include <stdio.h>

int main()
{
    char s[200];
    int c[256]=
    {
        0
    }
    , i;
    fgets(s, 200, stdin);
    for(i=0;s[i]&&s[i]!='\n';i++)if(!c[(unsigned char)s[i]])
    {
        putchar(s[i]);
        c[(unsigned char)s[i]]=1;
    }

    return 0;
}
