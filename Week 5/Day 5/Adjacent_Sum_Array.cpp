#include <bits/stdc++.h>
using namespace std;

int main() {
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    
    int testcase;
    cin >> testcase;

    while (testcase--) {
        int N;
        cin >> N;

        vector<long long> B(N - 1);
        for (int i = 0; i < N - 1; i++) {
            cin >> B[i];
        }

        sort(B.begin(), B.end());

        vector<long long> A(N);
        
        A[0] = B[0] / 2;
        for (int i = 1; i < N; i++) {
            A[i] = B[i - 1] - A[i - 1];
        }

        bool valid = true;
        for (int i = 0; i < N - 1; i++) {
            if (A[i] + A[i + 1] != B[i]) {
                valid = false;
                break;
            }
        }

        if (valid) {
            for (int i = 0; i < N; i++) {
                cout << A[i] << " ";
            }
            cout << endl;
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}

