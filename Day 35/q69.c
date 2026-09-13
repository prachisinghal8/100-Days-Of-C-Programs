#include <stdio.h>

int main()
{
    int n, i, l, s, found = 0;

    scanf("%d", &n);
    int a[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    l = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] > l)
            l = a[i];
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] != l && (!found || a[i] > s))
        {
            s = a[i];
            found = 1;
        }
    }

    if(found)
        printf("%d", s);
    else
        printf("-1");

    return 0;
}
