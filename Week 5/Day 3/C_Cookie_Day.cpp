#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;

    while (testCase--) {
        int numberOfCookieJar, numberOfChildren;
        cin >> numberOfCookieJar >> numberOfChildren;

        vector<int> arr(numberOfCookieJar);
        for (int i = 0; i < numberOfCookieJar; i++) {
            cin >> arr[i];
        }

        int minRemaining = INT_MAX;
        bool possible = false;  

        for (int i = 0; i < numberOfCookieJar; i++) {
            if (arr[i] >= numberOfChildren) {
                possible = true;
                minRemaining = min(minRemaining, arr[i] % numberOfChildren);
            }
        }

        if (!possible) {
            cout << -1 << endl;
        } else {
            cout << minRemaining << endl;
        }
    }

    return 0;
}
