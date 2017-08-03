#include <iostream>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;

    int j=b.length() , i=0,k=0;

    while(j>0)
    {
        if(a[i]==b[k])
            i++;

        k++;
        j--;
    }

    cout<<i+1;

    return 0;
}
