#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int x, y;
    cin >> x >> y;
    if (x * 2 < y)
        cout << "PLASTIC" << endl;
    else
        cout << "METAL" << endl;
    return 0;
}