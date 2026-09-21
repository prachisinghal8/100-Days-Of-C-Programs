#include <stdio.h>

int main()
{
    char s[200];
    int i, n = 0, p = 1;

    fgets(s, 200, stdin);

    while(s[n] != '\0' && s[n] != '\n')
        n++;

    for(i = 0; i < n / 2; i++)
    {
        if(s[i] != s[n - i - 1])
        {
            p = 0;
            break;
        }
    }

    if(p == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
