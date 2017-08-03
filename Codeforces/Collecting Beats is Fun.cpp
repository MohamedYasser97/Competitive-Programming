#include <iostream>
using namespace std;

int main()
{
    int k;
    cin>>k;

    int a[10]={0};

    for(int i=0;i<16;i++){
        char c;
        cin>>c;

        if(c=='.')
            continue;

        a[c-'0']++;
    }

    for(int i=1;i<10;i++)
        if(a[i]>2*k){
            cout<<"NO";
            return 0;
        }

    cout<<"YES";
    return 0;
}
