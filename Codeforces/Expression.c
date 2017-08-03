#include <stdio.h>

int main()
{
    int a,b,c,swap;
    scanf("%d %d %d",&a,&b,&c);
    int n[6];

    n[0]=a*b*c;
    n[1]=a+b*c;
    n[2]=a*b+c;
    n[3]=(a+b)*c;
    n[4]=a*(b+c);
    n[5]=a+b+c;

    for(int i=0;i<6;i++)
        for(int j=i+1;j<6;j++)
            if(n[i]<n[j])
            {
                swap=n[j];
                n[j]=n[i];
                n[i]=swap;
            }

    printf("%d",n[0]);

    return 0;

}
