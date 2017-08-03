//I COULD EXPLOIT THE PRESENCE OF EVEN NUMBERS TO CALCULATE THE REQUIRED TIME DIRECTLY BUT I'M JUST TOO LAZY TO GO BACK AND FRANKLY I DON'T GIVE A DUCK ABOUT YOUR OPINION
//NOW I DON'T EVEN GIVE A THIRD COMMENT..I GUESS THAT"S NOT A THIRD COMMENT SO BE IT
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char dir[n+1];

    for(int i=0;i<n;i++)
        cin>>dir[i];

    int dis[n];

    for(int i=0;i<n;i++)
        cin>>dis[i];

    int tempr,templ,mindis=1000000001;
    bool fr=false,fl=false;

    for(int i=0;i<n;i++)
    {
        if(dir[i]=='R')
        {
            tempr=dis[i];

            fr=true;
        }

        if(dir[i]=='L' && fr)
        {
            templ=dis[i];

            if(templ-tempr < mindis)
                mindis=templ-tempr;
            fr=false;
        }
    }

    (mindis==1000000001)? cout<<-1 : cout<<mindis/2;

    return 0;
}
