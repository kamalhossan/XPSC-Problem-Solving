#include <bits/stdc++.h>
using namespace std;

int cyclicDistance(char a, char b) {
    int diff = abs(a - b);
    return min(diff, 10 - diff);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        string S, K;
        cin >> S >> K;

        int minMoves = INT_MAX;

        for (int i = 0; i <= N - M; i++) {
            int currentMoves = 0;

            for (int j = 0; j < M; j++) {
                currentMoves += cyclicDistance(S[i + j], K[j]);
            }

            minMoves = min(minMoves, currentMoves);
        }

        cout << minMoves << endl;
    }

    return 0;
}
