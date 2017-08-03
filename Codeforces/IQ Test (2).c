#include <stdio.h>

int main()
{
    int a[4][4]={0};
    char c;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%c",&c);

            if(c=='#')
                a[i][j]=1;
        }

        scanf("\n");
    }

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        {
            if((a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1]) !=2)
            {printf("YES"); return 0;}
        }

    printf("NO");
    return 0;
}
