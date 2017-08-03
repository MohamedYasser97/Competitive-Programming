#include <iostream>

using namespace std;

bool islucky(long long int a)
{
    if(a<0)
        a*=-1;

    while(a!=0)
    {
        if(a%10==8)
            return true;
        a/=10;
    }

    return false;
}

int main()
{
    long long int n,c=1;
    cin>>n; n++;

    while(!islucky(n))
    {
        n++;
        c++;
    }

    cout<<c;

    return 0;

}
