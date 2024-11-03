#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;

    while(testCase--){
        int stringLength, stringCanBeRemoved;
        cin >> stringLength >> stringCanBeRemoved;

        string s;
        cin >> s;

        vector<int> LettersCount(26, 0);

        for(char c : s){
            LettersCount[c - 'a']++;
        }

        int oddCount = 0;
        for(int i = 0; i < 26; i++){
            if(LettersCount[i] % 2 != 0){
                oddCount++;
            }
        }

        if(oddCount - 1 <= stringCanBeRemoved){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
