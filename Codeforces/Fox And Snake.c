#include <stdio.h>

int main()
{
    int n,m,s=1;
    scanf("%d %d",&n,&m);

    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
            for(int j=1;j<=m;j++)
                printf("#");
        else
        {
            if(s%2==0)
                printf("#");

            for(int j=1;j<m;j++)
                printf(".");

            if(s%2!=0)
                printf("#");

            s++;
        }

        printf("\n");
    }

    return 0;
}
