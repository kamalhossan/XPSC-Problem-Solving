#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> scores(N);
        int total_scored = 0;
    
        for (int i = 0; i < N; i++) {
            cin >> scores[i];
            total_scored += scores[i];
        }

        int total_marks = (N + 1) * 100;
        int passing_marks = (total_marks + 1) / 2;
        int needed_marks = passing_marks - total_scored;


        if (needed_marks > 100) {
            cout << -1 << endl;
        } else if (needed_marks <= 0) {
            cout << 0 << endl;
        } else {
            cout << needed_marks << endl;
        }
    }

    return 0;
}
