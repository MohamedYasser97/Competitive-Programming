#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int mind=0,maxd=0,orgn=n;

    while(n>0)
        for(int i=1;i<=7;i++)
            {
                if(i==6 || i==7)
                    mind++;

                n--;
                if(n==0)
                    break;
            }

    while(orgn>0)
        for(int i=1;i<=7;i++)
            {
                if(i==1 || i==2)
                    maxd++;

                orgn--;
                if(orgn==0)
                    break;
            }

    cout<<mind<<' '<<maxd;

    return 0;
}
