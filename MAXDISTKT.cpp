#include<bits/stdc++.h>
#include<vector>
#include <ctype.h>
#define spc <<" "
using namespace std;
bool campa(pair<int, int>&p, pair<int, int>&q) {
	return p.second < q.second;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n;
		cin >> n;
		std::vector<pair<int, int>> arr;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			arr.push_back(make_pair(a, i));
		}
		int k = 0;
		sort(arr.begin(), arr.end());
		for (int i = 0; i < n; i++) {
			if (arr[i].first > k) {
				arr[i].first = k;
				k++;
			}
		}
		sort(arr.begin(), arr.end(), campa);
		for (int i = 0; i < arr.size(); i++) {
			cout << arr[i].first << " ";
		}
		cout<<"\n";

	}

	return 0;

}
