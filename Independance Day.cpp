#include <iostream>
using namespace std;

int main() {

int T;
cin>>T;

while(T--){
    int A,B,C;
    cin>>A>>B>>C;
    
    if(A<=B+C+1){
        if(B<=A+C+1){
            if(C<=A+B+1){
                cout<<"Yes"<<endl;
            }else{
        cout<<"No"<<endl;
    }
        }else{
        cout<<"No"<<endl;
    }
    }else{
        cout<<"No"<<endl;
    }
}
}