#include <stdio.h>

int main()
{
    int n, x, l, r;
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        l=x*(x+1)/2;
        r=(n*(n+1)/2)-((x-1)*x/2);
        if(l==r)
        {
            printf("%d",x);

            return 0;
        }
    }
    printf("-1");

    return 0;
}
