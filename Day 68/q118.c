#include <stdio.h>

int main()
{
    int n, a[100], i, j, f;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        f=1;
        for(j=i+1;j<n;j++)
            if(a[j]>a[i])f=0;
        if(f)
            printf("%d ",a[i]);
    }

    return 0;
}
