#include<iostream>
using namespace std;

int fastpower(int a , int b){
    if(b==0)
    return 1;
    int smallpower = fastpower(a,b/2);
    int smallpower1 = smallpower*smallpower;
    if(b & 1){
        return a*smallpower1;
    }
    return smallpower1;
    
}

int power(int a , int b){
    //Function to calculate power
    if(b==0)
    return 1;
    else
    return a*power(a,b-1);

    
}

int main()
{
    int a=0,b=0;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
    cout<<fastpower(a,b)<<endl;
    return 0;
}
