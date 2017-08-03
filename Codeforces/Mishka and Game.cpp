#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int m=0,c=0;

    while(n--)
    {
        int md,cd;
        cin>>md>>cd;

        if(md>cd)
            m++;
        else if(md<cd)
                c++;
    }

    if(m>c)
        cout<<"Mishka";
    else if(m<c)
            cout<<"Chris";
    else
            cout<<"Friendship is magic!^^";

    return 0;
}
