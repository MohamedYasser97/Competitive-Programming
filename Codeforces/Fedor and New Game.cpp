#include <iostream>
using namespace std;

int main()
{
    int n,m,k,fedor,res=0;
    cin>>n>>m>>k;

    int potfr[m];

    for(int i=0;i<m;i++)
        cin>>potfr[i];

    cin>>fedor;

    for(int i=0;i<m;i++){
        int tempf=fedor,tempn=n,tempc=0,div=1;

        while(tempn--){

            if(tempf%2 != potfr[i]%2)
                tempc++;

            tempf/=2; potfr[i]/=2;
        }

        if(tempc<=k)
            res++;
    }

    cout<<res;

    return 0;
}
