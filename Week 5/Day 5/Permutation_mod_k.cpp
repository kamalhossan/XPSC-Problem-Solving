#include <bits/stdc++.h>
using namespace std;

int main() {
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

        int testcase;
        cin >> testcase;
    
    while (testcase--) {
        int N, K;
        cin >> N >> K;
        
        if (K == 1) {
            cout << -1 << endl;
            continue;
        }
        
        vector<int> permutation(N);
        iota(permutation.begin(), permutation.end(), 1);
        
        bool valid = true;
        for (int i = 0; i < N; i += K) {
            if (i + K > N) {
                cout << -1 << endl;
                valid = false;
                break;
            }
            reverse(permutation.begin() + i, permutation.begin() + i + K);
        }
        
        if (valid) {
            for (int num : permutation) {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
