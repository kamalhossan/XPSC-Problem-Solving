#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;
    while(testCase--) {

        int length;
        cin >> length;

        vector<int> arr(length);
        for(int i = 0; i < length; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int case1 = arr[length-1] - arr[2];

        int case2 = arr[length-3] - arr[0];

        int case3 = arr[length-2] - arr[1]; 

        int minMax = min({case1, case2, case3});
        
        cout << minMax << endl;
    }

    return 0;
}
