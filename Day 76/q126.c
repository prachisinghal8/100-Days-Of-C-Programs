#include <stdio.h>

int main()
{
    int n, a[100], x, i, j, k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&x);
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)for(k=j+1;k<n;k++)if(a[i]+a[j]+a[k]==x)printf("%d %d %d\n",a[i],a[j],a[k]);

    return 0;
}
