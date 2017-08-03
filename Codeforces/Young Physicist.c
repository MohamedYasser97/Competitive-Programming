#include <stdio.h>

int main()
{
    int n,a=0,b=0,c=0;
    scanf("%d",&n);
    int v[n][3];

    for(int i=0;i<n;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&v[i][j]);

    for(int i=0;i<n;i++)
    {
        a+=v[i][0];
        b+=v[i][1];
        c+=v[i][2];
    }

    if(a==0 && b==0 && c==0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
