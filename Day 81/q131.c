#include <stdio.h>
#include <string.h>

int main()
{
    char s[200], w[50][50];
    int n=0, i=0, j=0;
    fgets(s, 200, stdin);
    while(s[i])
    {
        if(s[i]!=' '&&s[i]!='\n')
            w[n][j++]=s[i];
        else if(j)
        {
            w[n][j]=0;
            n++;
            j=0;
        }
        i++;
    }
    if(j)
    {
        w[n][j]=0;
        n++;
    }
    for(i=n-1;i>=0;i--)
        printf("%s%s",w[i],i?" ":"");

    return 0;
}
