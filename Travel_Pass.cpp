#include <bits/stdc++.h>
// #include<iostream>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // Hey ''BUNNY'' you can code from here --->
        string str;
        ll n,a,b;
        cin>>n>>a>>b;
        cin>> str;
        ll result = 0;
        for (int  i = 0; i < str.length(); i++)
        {
            if(str[i] == '0'){
                result += a;
            }
            else{
                result += b;
            }
            
        }
        cout<<result<<endl;
        
    }
    return 0;
}
