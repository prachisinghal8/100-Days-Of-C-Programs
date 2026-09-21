#include <stdio.h>

int main()
{
    char s[200], t;
    int i, n = 0;

    fgets(s, 200, stdin);

    while(s[n] != '\0' && s[n] != '\n')
        n++;

    for(i = 0; i < n / 2; i++)
    {
        t = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = t;
    }

    s[n] = '\0';
    printf("%s", s);

    return 0;
}
