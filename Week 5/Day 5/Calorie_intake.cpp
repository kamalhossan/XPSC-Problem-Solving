#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int X, Y, Z;
    cin >> X >> Y >> Z;

    int calories_consumed = Y * Z;

    if (calories_consumed > X) {
        cout << -1 << endl;
    } else {
        cout << X - calories_consumed << endl;
    }

    return 0;
}
