#include <iostream>
using namespace std;

int main()
{
    string n;
    bool flag=false;
    cin>>n;

    int len=0;

    for(int i=0;i<n.size();i++)
        if(n[i]=='4' || n[i]=='7')
            len++;

    if(len==0)
        cout<<"NO";
    else{
    while(len>0){
        if(len%10!=4 && len%10!=7){
            cout<<"NO";
            return 0;
        }

        len/=10;
    }

    cout<<"YES";
    }

    return 0;
}
