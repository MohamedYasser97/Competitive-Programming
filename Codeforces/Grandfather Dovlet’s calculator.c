#include <stdio.h>

int main()
{
    int a,b,sum=0,c,k;
    int s[10]={6,2,5,5,4,5,6,3,7,6};

    scanf("%d %d",&a,&b);

    for(int i=a;i<=b;++i)
    {
        c=i;
        while(c!=0)
        {
            sum+=s[c%10];
            c/=10;
        }
    }

    printf("%d",sum);

    return 0;
}
