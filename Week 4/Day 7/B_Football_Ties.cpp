#include <bits/stdc++.h>
using namespace std;

int minimumDraws(int X, int Y) {
    for (int d = 0; d <= min(X, Y); ++d) {
        if ((X - d) >= 0 && (Y - d) >= 0 && (X - d) % 3 == 0 && (Y - d) % 3 == 0) {
            return d;
        }
    }
    return -1;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;
        cout << minimumDraws(X, Y) << endl;
    }

    return 0;
}
