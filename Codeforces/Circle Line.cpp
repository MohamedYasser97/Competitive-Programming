#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int s,t;
    cin>>s>>t; s--; t--; if(s>t){s=s+t; t=s-t; s=s-t;}

    int w1=0,w2=0,x=s;

    while(s!=t)
    {
        w1+=a[s];
        s++;
    }

    while(t!=x)
    {
        w2+=a[t];
        t++;
        if(t+1 > n)
            t=0;
    }

    cout<<min(w1,w2);

    return 0;
}
