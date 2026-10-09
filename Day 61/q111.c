#include <stdio.h>

int main()
{
    int n, a[100], i, k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        if(i==0||a[i]!=a[i-1])a[k++]=a[i];
    for(i=0;i<k;i++)
        printf("%d ",a[i]);

    return 0;
}
