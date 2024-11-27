#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<long long> B(N - 1);
        for (int i = 0; i < N - 1; i++) {
            cin >> B[i];
        }

        sort(B.begin(), B.end());

        vector<long long> A(N);
        A[0] = (B[0] + B[1] - B[N - 2]) / 2;
        for (int i = 1; i < N; i++) {
            A[i] = B[i - 1] - A[i - 1];
        }

        for (int i = 0; i < N; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
