#include <stdio.h>

int main()
{
    int n, m, a[200], i, j, k=0, x, f;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        f=0;
        for(j=0;j<k;j++)
            if(a[j]==x)f=1;
        if(!f)
            a[k++]=x;
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&x);
        f=0;
        for(j=0;j<k;j++)
            if(a[j]==x)f=1;
        if(!f)
            a[k++]=x;
    }
    for(i=0;i<k;i++)
        printf("%d ",a[i]);

    return 0;
}
