#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;

    while (testCase--) {
        int spookyDays;
        cin >> spookyDays;

        int eatDays = 0;

        if (spookyDays > 0) {
            eatDays = spookyDays / 7;
            if (spookyDays % 7 >= 2) {
                eatDays++;
            }
        }

        cout << eatDays << endl;
    }

    return 0;
}
