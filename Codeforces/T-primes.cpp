#include <iostream>
#include <set>
using namespace std;

bool leg[1000001];
set<long long int>tprime;

void setprime()
{
    for(int i=2;i*i<1000001;i++)
        if(!leg[i])
            for(int j=i*i;j<1000001;j+=i)
                leg[j]=true;

    for(int i=2;i<1000001;i++)
        if(!leg[i])
            tprime.insert((long long int)i*i);
}

int main()
{
    int n;
    cin>>n;
    setprime();

    while(n--){
        long long int temp;
        cin>>temp;

        if(tprime.find(temp)!=tprime.end())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
