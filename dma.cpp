#include<iostream>
using namespace std;
int main()
{
   int r=0,c=0;
   cin>>r>>c;
   int **arr= new int*[r];
   for(int i=0;i<r;i++){
       arr[i]=new int[c];
   }
   
   int value=1;
   for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
           arr[i][j]=value;
           value++;
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }
   

    return 0;
}
