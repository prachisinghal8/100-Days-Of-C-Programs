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
    for(i=0;s[i]&&s[i]!='\n';i++)
        c[(unsigned char)s[i]]++;
    for(i=0;i<256;i++)
        if(c[i])printf("%c:%d\n",i,c[i]);

    return 0;
}
