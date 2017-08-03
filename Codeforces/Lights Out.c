#include <stdio.h>

int main()
{
    int g[3][3]={0},f=0;

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        {
            scanf("%d", &f);
            g[i][j]+=f;
           if(i>0)
                g[i-1][j]+=f;
           if(i<2)
                g[i+1][j]+=f;
           if(j>0)
                g[i][j-1]+=f;
           if(j<2)
                g[i][j+1]+=f;
        }

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                if(g[i][j]%2==0)
                    printf("1");
                    else
                        printf("0");
            printf("\n");
        }
    return 0;
}
