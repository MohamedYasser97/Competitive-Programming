#include <iostream>
using namespace std;

int main()
{
    char b[8][8];
    int ws=0,bs=0;

    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++){

            cin>>b[i][j];

            switch(b[i][j]){

                case 'Q':   ws+=9;break;
                case 'q':   bs+=9;break;

                case 'R':   ws+=5;break;
                case 'r':   bs+=5;break;

                case 'B':   ws+=3;break;
                case 'b':   bs+=3;break;

                case 'N':   ws+=3;break;
                case 'n':   bs+=3;break;

                case 'P':   ws+=1;break;
                case 'p':   bs+=1;break;

            }
        }

        if(ws>bs)
            cout<<"White";
        else
            if(bs>ws)
                cout<<"Black";
        else
            cout<<"Draw";

        return 0;


}
