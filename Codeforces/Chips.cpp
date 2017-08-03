#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int k=1;
    while(m>=k)
    {
        m-=k;
        k++;
        if(k>n)
            k=1;
    }

    cout<<m;

    return 0;
}
