#include <stdio.h>
#include <math.h>

int main()
{
    int x1,y1,x2,y2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

    if(x1==x2)
        printf("%d %d %d %d",x1+abs(y2-y1),y1,x2+abs(y2-y1),y2);

    else if(y1==y2)
        printf("%d %d %d %d",x1,y1+abs(x2-x1),x2,y2+abs(x2-x1));

    else if(abs(y1-y2)==abs(x1-x2))
            printf("%d %d %d %d",x1,y2,x2,y1);

    else
        printf("-1");

    return 0;

}
