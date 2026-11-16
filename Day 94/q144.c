#include <stdio.h>

void pre(int a[], int n, int i)
{
    if(i>=n||a[i]==-1)
        return;
    printf("%d ",a[i]);
    pre(a, n, 2*i+1);
    pre(a, n, 2*i+2);
}
int main()
{
    int n, a[100], i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    pre(a, n, 0);

    return 0;
}
