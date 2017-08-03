#include <iostream>
using namespace std;

int main()
{
    long long int n,m;
    cin>>n>>m;

    cout<<(n%m)*(((n/m)+1)*(n/m))/2 + (m-(n%m))*((n/m)*((n/m)-1))/2<<' ';

    cout<<((n-m+1)*(n-m))/2;

    return 0;
}
