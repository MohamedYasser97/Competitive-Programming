#include <stdio.h>
#include <math.h>   //Thanks Mr. Saad Abo Galalh for everything you've done

int main()
{
    int a1,a2,a3,s1,s2,s3;

    scanf("%d %d %d",&a1,&a2,&a3);

    s1 = sqrt((a1*a2)/a3);
    s2 = sqrt((a2*a3)/a1);
    s3 = sqrt((a1*a3)/a2);

    printf("%d",4*(s1+s2+s3));

    return 0;
}
