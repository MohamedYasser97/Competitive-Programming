#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum+=x;
    }

    if(n==1){

        if(sum==1)
            cout<<"YES";
        else
            cout<<"NO";
    }else{

            if(sum==n-1)
                cout<<"YES";
            else
                cout<<"NO";
    }

    return 0;
}
