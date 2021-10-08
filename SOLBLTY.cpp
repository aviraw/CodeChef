#include <iostream>

#include <cmath>

using namespace std;

int main()

{

    int t,x,a,b;

    cin>>t;

    while(t--){

        cin>>x>>a>>b;

        cout<<((a)+((100-x)*b))*10<<endl;

    }

}
