#include <iostream>
#include <cmath>
using namespace std;

//long long int gcd(long long int a,long long int b)
//{
//    if(b==0)
//        return a;
//
//    return gcd(b,a%b);
//}

int main()
{
    long long int y,k,n;

    cin>>y>>k>>n;

    if(y==n){
        cout<<-1;
        return 0;
    }

    long long int adder=k,start=k-(y%k);

//    if(y+1>=k){
//        adder=fabs(k-((y+1)%k));
//        start = y+1;
//    }else{
//        adder=fabs(k-(k%(y+1)));
//        start=k;
//    }

    //bool flag=false;

    for(long long int i=start;i<=n-y;i+=k){
        //if(i%k==0){
            //flag=true;
            //adder=k;
            cout<<i<<' ';
        //}
    }

    if(start>n-y)
        cout<<-1;

    return 0;
}
