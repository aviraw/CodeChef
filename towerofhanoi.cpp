#include<iostream>
using namespace std;

void towerofhanoi(int n , char src , char target, char helper){
    if(n==0){
        return;
    }
    
    towerofhanoi(n-1,src,helper,target);
    
    cout<<"move "<<n<<" disk from "<<src<<" to "<<target<<endl;
    
    towerofhanoi(n-1,helper,target,src);
    
}

int main()
{
    int n=0;
    cin>>n;
    
    towerofhanoi(n,'A','C','B');
   
    return 0;
}
