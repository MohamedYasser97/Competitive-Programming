#include <iostream>
using namespace std;

int main()
{
    string a;
    cin>>a;

    int pivloc;
    for(int i=0;i<a.size();i++)
        if(a[i]=='^'){
            pivloc=i;
            break;
        }

    long long int left=0,right=0;

    for(int i=0;i<a.size();i++)
        if(a[i]!='='){

            if(i<pivloc)
                left+=(a[i]-'0')*(pivloc-i);
            else
                right+=(a[i]-'0')*(i-pivloc);
        }

    if(right>left)
        cout<<"right";
    else if(left>right)
        cout<<"left";
    else
        cout<<"balance";

    return 0;
}
