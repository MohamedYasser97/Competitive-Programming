#include <iostream>
//FIRST OFFICIAL SUBMISSION WITH C++ ^_^
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;

    char a[10][10];

    int done[10][10]={0},row[10]={0},col[10]={0},eat=0;
//FAILED SEVERAL TIMES BECAUSE OF a[r][c],done[r][c],row[r],col[j]
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='S')
            {
                row[i]=1;
                col[j]=1;
            }
        }

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        {
            if(row[i]==0)
            {
                eat++;
                done[i][j]=1;
            }
        }

    for(int j=0;j<c;j++)
        for(int i=0;i<r;i++)
        {
            if(col[j]==0 && done[i][j]==0)
                eat++;
        }

    cout<<eat;

    return 0;
}
