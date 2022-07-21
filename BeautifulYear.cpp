#include<iostream>
using namespace std;
#include<string>
int main()
{
    int yr,a,b,c,d;
    cin>> yr;
    for(int i=yr; i++;)
    {
        a=i/1000;
        b=i/100 %10;
        c=i/10 %10;
        d=i%10;
        if(a!=b and a!=c and a!=d and b!=c and b!=d and c!=d)
        {
            cout<<i;
            break;
        }
    }
    
    return 0;
}