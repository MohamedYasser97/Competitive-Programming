#include <iostream>
using namespace std;

int input;

int solve(int n)
{
    if(n>input)
        return 0;

    return (1+solve(n*10)) + solve(n*10+1);
}

int main()
{
    cin>>input;

    cout<<solve(1);

    return 0;
}
