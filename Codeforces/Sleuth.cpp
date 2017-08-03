#include <iostream>

using namespace std;

bool vo(char c)
{
    if(c=='A' || c=='a' || c=='E' || c=='e' || c=='I' || c=='i' || c=='O' || c=='o' || c=='U' || c=='u' || c=='Y' || c=='y')
        return true;

    return false;
}

int main()
{
    string in;

    getline(cin,in);

    for(int i=in.size()-1;i>=0;i--)

        if(in[i]!=' ' && in[i]!='?')
            if(vo(in[i]))
                {cout<<"YES"; return 0;}
            else
                {cout<<"NO"; return 0;}

}
