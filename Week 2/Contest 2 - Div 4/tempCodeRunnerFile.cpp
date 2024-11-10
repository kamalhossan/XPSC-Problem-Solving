#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;

    while (testCase--) {
        int n, maxDiff;
        cin >> n >> maxDiff;

        int totalChocolate = 0;
        vector<int> chocolates(n);

        for (int i = 0; i < n; i++) {
            cin >> chocolates[i];
            totalChocolate += chocolates[i];
        }

        if (totalChocolate < n) {
            cout << "NO" << endl;
            continue;
        }

        int minChoco = 1;
        int maxChoco = minChoco + maxDiff;

  
        int requiredTotal = n * minChoco;

        if (totalChocolate < requiredTotal || totalChocolate > n * maxChoco) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            vector<int> distributeChocolates(n, minChoco);
            totalChocolate -= requiredTotal;
            for (int i = 0; i < n && totalChocolate > 0; i++) {
                int addChoco = min(totalChocolate, maxDiff);
                distributeChocolates[i] += addChoco;
                totalChocolate -= addChoco;
            }
        }
    }

    return 0;
}
