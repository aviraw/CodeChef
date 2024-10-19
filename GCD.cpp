#include <iostream>
using namespace std;

int main() {

	int T;
	cin>>T;
	
	while(T--){
	    
	    int N,M;
	    cin>>N>>M;
	    int arr[N][M];
	    
	    for(int i=0;i<N;i++){
	        for(int j=0;j<M;j++){
	            arr[i][j]=0;
	        }
	    }
	    for(int i=0;i<N;i++){
	        for(int j=0;j<M;j++){
	            if(i%2==0){
	            arr[i][j]=j+2;
	            }else{
	                arr[i][j]=j+3;
	            }
	        }
	    }
	    for(int i=0;i<N;i++){
	        for(int j=0;j<M;j++){
	            cout<<arr[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	    
	    
	}

}
