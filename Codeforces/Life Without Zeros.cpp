#include <iostream>

using namespace std;

int trans(int a)
{
    int mod,newa=0,pos=1;

    while(a!=0)
    {
        mod=a%10;
        a/=10;

        if(mod!=0)
        {
            newa+= pos*mod;
            pos*=10;
        }
    }

    return newa;
}


int main()
{
    long long int a,b,c;
    cin>>a>>b;
    c=a+b;

    if(trans(a)+trans(b) == trans(c))
        cout<<"YES";
    else
        cout<<"NO";

    return 0;

}
