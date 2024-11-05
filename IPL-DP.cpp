#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int dp[200000] = {0};

int main(){
	int N;
	cin>>N;

	vector<int> v(N);
	for(int i = 0; i < N; ++i){
		cin>>v[i];
	}
	dp[0] = v[0];
	dp[1] = dp[0] + v[1];
	if(dp[0] + v[2] > dp[1]){
		dp[2] = dp[0] + v[2];
	}
	else dp[2] = dp[1];

	if(v[1] + v[2] > dp[2]){
		dp[2] = v[1] + v[2];
	}

	for(int i = 3; i < N; ++i){
		dp[i] = ((dp[i-1] > dp[i-3] + v[i-1] + v[i]) ? dp[i-1] : (dp[i-3] + v[i-1] + v[i]));
		dp[i] = ((dp[i] > dp[i-2] + v[i]) ? dp[i] : (dp[i-2] + v[i]));
	}
	cout<<dp[N-1];

	return 0;
}
