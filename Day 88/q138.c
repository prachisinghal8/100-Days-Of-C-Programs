#include <stdio.h>

int main()
{
    char s[200], st[200];
    int i, t=0;
    scanf("%199s",s);
    for(i=0;s[i];i++)
    {
        if(s[i]=='('||s[i]=='['||s[i]=='{')
            st[t++]=s[i];
        else
        {
        if(t==0)
        {
        printf("False");

        return 0;
        }
        char x=st[--t];
        if((s[i]==')'&&x!='(')||(s[i]==']'&&x!='[')||(s[i]=='}'&&x!='{'))
        {
        printf("False");

        return 0;
        }
        }
        }
        printf(t==0?"True":"False");

        return 0;
        }
