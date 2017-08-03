#include <stdio.h>

int main()
{
    int n,t=0;
    scanf("%d",&n);
    int a[n][2];

    for(int i=0;i<n;i++)
        for(int j=0;j<2;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][0]==a[j][1])
                t++;

    printf("%d",t);

    return 0;
}
