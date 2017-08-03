#include <iostream>

using namespace std;

int main()
{
    int n,pnt=0;
    cin>>n;
    int a[n][2];

    for(int i=0;i<n;i++)
        for(int j=0;j<2;j++)
            cin>>a[i][j];

    for(int i=0;i<n;i++)
    {
        int b[4]={0};

        for(int j=0;j<n;j++)
        {
            if(a[i][0]==a[j][0] && a[i][1]>a[j][1])
                b[0]=1;
            if(a[i][0]==a[j][0] && a[i][1]<a[j][1])
                b[1]=1;
            if(a[i][0]>a[j][0] && a[i][1]==a[j][1])
                b[2]=1;
            if(a[i][0]<a[j][0] && a[i][1]==a[j][1])
                b[3]=1;
        }

        if(b[0]+b[1]+b[2]+b[3]==4)
            pnt++;
    }

    cout<<pnt;

    return 0;
}
