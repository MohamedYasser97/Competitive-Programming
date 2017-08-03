#include <stdio.h>

int main()
{
    int m[5][5],a,b,move=0;

    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        {
            scanf("%d",&m[i][j]);
            if(m[i][j]==1)
            {
                a=i; b=j;
            }
        }

    while(a!=2 || b!=2)
    {
        if(a>2)
        {
            a--; move++;
        }else if(a<2){
            a++; move++;
        }

        if(b>2)
        {
            b--; move++;
        }else if(b<2){
            b++; move++;
        }
    }

    printf("%d",move);

    return 0;
}
