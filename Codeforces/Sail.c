#include <stdio.h>

int main()
{
    int t,sx,sy,ex,ey,k=0;

    scanf("%d %d %d %d %d",&t,&sx,&sy,&ex,&ey);

    char d[t+1];
    scanf("%s",d);

    for(int i=0;i<t;i++)
        {
            if(sx>ex)
            {
                if(d[i]=='W')
                sx--;
            }else if(sx<ex)
                    {
                        if(d[i]=='E')
                            sx++;
                    }
         /////////////
         if(sy>ey)
            {
                if(d[i]=='S')
                sy--;
            }else if(sy<ey)
                    {
                        if(d[i]=='N')
                            sy++;
                    }
        /////////////
            k++;

            if(sx==ex && sy==ey)
            {
                printf("%d",k); return 0;
            }

        }


    printf("-1");

    return 0;
}
