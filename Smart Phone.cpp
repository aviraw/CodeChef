#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	long long budget[n];
	for(int i=0;i<n;i++){
	    cin>>budget[i];
	}
	sort(budget,budget+n);
	long long arr[n];
	for(int i=0;i<n;i++){
	    arr[i]=budget[i]*(n-i);
	}
	sort(arr,arr+n);
	cout<<arr[n-1]<<endl;
	return 0;
}

