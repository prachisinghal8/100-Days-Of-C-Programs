#include <stdio.h>

int main()
{
    int n, i, x, ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        ans^=x;
    }
    printf("%d",ans);

    return 0;
}
