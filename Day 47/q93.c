#include <stdio.h>

int main()
{
    char a[200], b[200];
    int f[256] = {0}, i, p = 1;

    fgets(a, 200, stdin);
    fgets(b, 200, stdin);

    for(i = 0; a[i] != '\0' && a[i] != '\n'; i++)
        f[(unsigned char)a[i]]++;

    for(i = 0; b[i] != '\0' && b[i] != '\n'; i++)
        f[(unsigned char)b[i]]--;

    for(i = 0; i < 256; i++)
    {
        if(f[i] != 0)
        {
            p = 0;
            break;
        }
    }

    if(p == 1)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}
