#include <stdio.h>

int main()
{
    int n, a[100], i, j, x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        x=-1;
        for(j=i+1;j<n;j++)if(a[j]>a[i])
        {
            x=a[j];
            break;
        }
        printf("%d%s",x,i==n-1?"":", ");
    }

    return 0;
}
