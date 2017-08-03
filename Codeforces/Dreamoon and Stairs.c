#include <stdio.h>

int main()
{
    int n,m,p;
    scanf("%d %d",&n,&m);

    if(n<m)
    {
        printf("-1");
        return 0;
    }

    p=n/2; if(n%2!=0)p++;
    int a=p;

    while(a>=0)
        if(p%m ==0)
        {
            printf("%d",p);
            return 0;
        }else
            {
                p++;
                a--;
            }


    printf("-1");
    return 0;
}
