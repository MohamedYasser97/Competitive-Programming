#include <iostream>

using namespace std;

int main()
{
    long long int n,m,pr=0;
    cin>>n>>m;

    //int j=1+(5-1)
    for(int i=1;i<=n;i++)
        pr+=(i+m)/5 - i/5;

    cout<<pr;

    return 0;
    //10
   // 1 2 3 4 5 6 7 8 9 10 11 12 13 14---->24/5 - 10/5
   //                                     4.8     2
}
