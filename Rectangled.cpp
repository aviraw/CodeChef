#include <iostream>
using namespace std;

int main() {

	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    
	    int lens = N/4;
	    int ans =0;
	    if(N%4==1){
	        ans = lens*lens;
	    }else if(N%4==2){
	       ans = lens*(lens+1);
	    }else if(N%4==3){
	        ans = lens*(lens+1);
	    }else{
	        ans = lens*lens;
	    }
	    
	    cout<<ans<<endl;
	}

}
