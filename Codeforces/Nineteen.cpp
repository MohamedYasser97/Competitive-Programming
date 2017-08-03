#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string a;
    int b[4]={0};

    cin>>a;

    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='n')//3for1
            b[0]++;
        else if(a[i]=='i')//1
            b[1]++;
        else if(a[i]=='e')//3
            b[2]++;
        else if(a[i]=='t')//1
            b[3]++;
    }

    if(b[0]>=2 && b[1]>=1 && b[2]>=3 && b[3]>=1)
        cout<<min(min((b[0]-1)/2,b[1]) , min(b[2]/3,b[3]));
    else
        cout<<0;

//cout<<b[0]<<endl<<b[1]<<endl<<b[2]<<endl<<b[3]; SUCH DEBUGGING MUCH CODE WOW :O
    return 0;
}
