#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int h[n];
    for(int i=0;i<n;i++)
        cin>>h[i];

    int t=0,i=0;
    while(i<=n-1)
    {
        //go up
        if(i==0)
            t+=h[i];
        else
        if(h[i]>h[i-1])
            t+=h[i]-h[i-1];
        //end go up

        t++;    //eat

        if(i==n-1)
            break;
        else
        {
            if(h[i]>h[i+1])
                t+=h[i]-h[i+1];     //plan next tree

            t++;    //jump
            i++;
        }
    }

    cout<<t;
    return 0;
}
