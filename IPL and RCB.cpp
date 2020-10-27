#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,x;
	    cin>>n>>x;
	    if(n-x<=0) cout<<0<<endl;
	    else cout<<n-x<<endl;
	}
	return 0;
}
