#include <stdio.h>

int main()
{
    char s[200];
    int i, j, k, n = 0, first = 1;

    fgets(s, 200, stdin);

    while(s[n] != '\0' && s[n] != '\n')
        n++;

    for(i = 0; i < n; i++)
    {
        for(j = i; j < n; j++)
        {
            if(first == 0)
                printf(",");

            for(k = i; k <= j; k++)
                printf("%c", s[k]);

            first = 0;
        }
    }

    return 0;
}
