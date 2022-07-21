#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a=0,moves=0;
    for(int i=1; i<6; i++)
    {
        for(int j=1; j<6;j++)
        {
            cin >> a;
            if(a==1)
            {
                moves = abs(3-i) + abs(3-j);
                cout << moves;
                break;
            }
        }
    }
    return 0;
}