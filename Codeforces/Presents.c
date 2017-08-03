#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];

    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);

    for(int i=1;i<=n;i++)
        b[a[i]]=i;  //a[a[i]]=i; didn't work

    for(int i=1;i<=n;i++)
        printf("%d ",b[i]);

    return 0;
}
