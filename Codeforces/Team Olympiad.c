#include <stdio.h>

int min(int a,int b,int c)
{
    if(a<=b)
    {
        if(a<=c)
            return a;
        else
            return c;
    }
    else if(b<=a)
         {
            if(b<=c)
                return b;
            else
                return c;
         }
}

int main()
{
    int n,w;

    scanf("%d",&n);
    int a[n],freq[4]={0};

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        freq[a[i]]++;
    }

    w=min(freq[1],freq[2],freq[3]);

    int b[w][3];

    printf("%d\n",w);   if(w==0)return 0;

    for(int i=0,j=0;i<n,j<w;i++)
        if(a[i]==1)
            {b[j][0]=i+1; j++;}

    for(int i=0,j=0;i<n,j<w;i++)
        if(a[i]==2)
            {b[j][1]=i+1; j++;}

    for(int i=0,j=0;i<n,j<w;i++)
        if(a[i]==3)
            {b[j][2]=i+1; j++;}

    for(int i=0;i<w;i++)
    {
        for(int j=0;j<3;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }
    return 0;
}
