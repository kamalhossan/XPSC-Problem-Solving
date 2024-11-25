#include <bits/stdc++.h>
using namespace std;

bool simulate(const vector<int>& arr, int start, int direction) {
    int n = arr.size();
    vector<int> state = arr;
    int pos = start;

    while (pos >= 0 && pos < n) {
        if (state[pos] > 0) {
            state[pos]--;
            direction *= -1;
        }
        pos += direction;
    }

    return all_of(state.begin(), state.end(), [](int x) { return x == 0; });
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;

    while (testCase--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int ways = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                if (simulate(arr, i, 1)) ways++;
                if (simulate(arr, i, -1)) ways++;
            }
        }

        cout << ways << endl;
    }

    return 0;
}

