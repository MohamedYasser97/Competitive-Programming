#include <stdio.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    scanf("%d",&n);

    char a[n];
    scanf("%s",a);

    for(int i=0;i<n/2;i++)
    {
        if(a[i]=='R' && a[n/2 + i]=='L')
            printf("%d %d\n",n/2+i+1,i+1);
        else
            printf("%d %d\n",i+1,n/2+i+1);
    }

    return 0;
}
