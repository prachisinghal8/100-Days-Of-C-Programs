#include <stdio.h>

int main()
{
    int n, a[100], p[100], q[100], i, x=0, y=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=0)
            p[x++]=a[i];
        else q[y++]=a[i];
    }
    for(i=0;i<x||i<y;i++)
    {
        if(i<x)
            printf("%d ",p[i]);
        if(i<y)
            printf("%d ",q[i]);
    }

    return 0;
}
