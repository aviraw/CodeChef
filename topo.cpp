#include<iostream>
using namespace std;
int main()
{
    int m=0,n=0;
    cin>>m>>n;
    int a[m][n];
    int val=1;
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            a[row][col]=val;
            val++;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    
    for(int col=0;col<n;col++){
        
            if(col%2==0){
                for(int row=0;row<m;row++){
                    cout<<a[row][col]<<" ";
                }
            }
            else{
                 for(int row=m-1;row>=0;row--){
                    cout<<a[row][col]<<" ";
                }
                
            }
        
    }
    
    

    return 0;
}
