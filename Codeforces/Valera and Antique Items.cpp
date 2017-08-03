#include <iostream>

using namespace std;

int main()
{
    long long int n,v,posnum,av,su=0,m=1,k=0;
    bool flag=0;

    cin>>n>>v;
    long long int supos[n]={0};

    for(int i=0;i<n;i++)
    {
        cin>>posnum;

        for(int j=0;j<posnum;j++)
        {
            cin>>av;
            if(v>av)
            {
                if(!flag){su++;flag=1;}
                supos[k]=m;
            }
        }
        flag=0;
        k++;
        m++;
    }

    cout<<su<<endl;
    for(int i=0;i<n;i++)
        if(supos[i] != 0)
            cout<<supos[i]<<" ";

    return 0;
}
