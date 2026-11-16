#include <stdio.h>

void post(int a[], int n, int i)
{
    if(i>=n||a[i]==-1)
        return;
    post(a, n, 2*i+1);
    post(a, n, 2*i+2);
    printf("%d ",a[i]);
}
int main()
{
    int n, a[100], i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    post(a, n, 0);

    return 0;
}
