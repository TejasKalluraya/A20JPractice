#include<iostream>
using namespace std;
int main()
{
    string str;
    int n,p;
    cin>>n>>p;
    cin>>str;
    
    while(p--)
    {
        for(int j=0; j<n-1;j++)
        {
            if(str[j+1]=='G' and str[j]=='B')
            {
                    swap(str[j],str[j+1]);
                    j++;
            }
        }
    }
    cout<<str;
    return 0;
}