#include <stdio.h>

int main()
{
    char s[200];
    int i, c=0, in=0;
    fgets(s, 200, stdin);
    for(i=0;s[i];i++)
    {
        if(s[i]!=' '&&s[i]!='\n'&&!in)
        {
            c++;
            in=1;
        }
        if(s[i]==' '||s[i]=='\n')
            in=0;
    }
    printf("%d",c);

    return 0;
}
