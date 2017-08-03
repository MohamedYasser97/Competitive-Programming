#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int l,r;
    cin>>l>>r;

    if(l==r)
        cout<<0;
    else
        cout<<(long long int)pow(2,floor(log2(l^r)+1))-1;

    return 0;
}
