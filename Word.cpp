#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ascii,capital=0,small=0;
    string str;
    cin >> str;
    for(int i=0;i<str.size();i++)
    {
        ascii=int(str[i]);
        if(ascii >=65 and ascii<=90)
        {
            capital++;
        }
        if(ascii>=97 and ascii<=122)
        {
            small++;
        }
    }
    if(capital>small)
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }
    else{
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    cout<<str;
    return 0;
}