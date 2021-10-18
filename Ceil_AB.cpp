#include <iostream>
using namespace std;

int main() {
	
	int a,b;
	cin >> a >> b;
	int change = a - b;
	int num = change % 10;
	(num < 9) ? change++ : change--;
	cout << change;
	return 0;
}

