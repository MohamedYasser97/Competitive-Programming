#include <iostream>

using namespace std;

int main()
{
    long long int l,r;
    cin>>l>>r;

    if(l%2==0 && r-l>=2)
        cout<<l<<" "<<l+1<<" "<<l+2;

    else if(l%2!=0 && r-l>=3)
        cout<<l+1<<" "<<l+2<<" "<<l+3;

    else
        cout<<"-1";

    return 0;
}
