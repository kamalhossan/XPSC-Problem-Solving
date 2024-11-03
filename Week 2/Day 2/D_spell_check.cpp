#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string targetWord = "Timur";

    int testCase;
    cin >> testCase;

    while(testCase--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        if(n == 5){ 
            sort(s.begin(), s.end());
            sort(targetWord.begin(), targetWord.end());
            if(s == targetWord){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}
