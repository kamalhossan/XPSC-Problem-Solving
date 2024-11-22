#include<bits/stdc++.h>
using namespace std;

int main() {
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    
    int testCase;
    cin >> testCase;
    
    while (testCase--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int &num : arr) cin >> num;

        int andResult = arr[0];
        for (int num : arr) {
            andResult &= num;
        }

        long long result = 0;
        for (int bitw = 0; bitw < 31; ++bitw) {
            if (andResult & (1 << bitw)) {
                result += (1LL << bitw);
            }
        }

        cout << result << "\n";
    }

    return 0;
}
