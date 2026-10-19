#include <stdio.h>

int main()
{
    int n, a[100], k, i, j, t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    k%=n;
    for(j=0;j<k;j++)
    {
        t=a[n-1];
        for(i=n-1;i>0;i--)
            a[i]=a[i-1];
        a[0]=t;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
