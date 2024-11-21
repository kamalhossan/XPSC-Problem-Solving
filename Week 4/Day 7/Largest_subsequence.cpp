#include<bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int countAB = 0;
        int countBA = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == 'a' && s[i+1] == 'b'){
                countAB++;
            }
            if(s[i] == 'b' && s[i+1] == 'a'){
                countBA++;
            }
        }

        if(countAB == countBA){
            cout << n << endl;
        } else {
            char first = s[0], last = s[n-1];
            int ansOne = n, ansTwo = n;
            for(int i = 0; i < n; i++){
                if(s[i] != first){
                    break;
                }
                ansOne--;
            }
            for(int i = n - 1; i >= 0; i--){
                if(s[i] != last){
                    break;
                }
                ansTwo--;
            }
             cout << max(ansOne, ansTwo) << endl;
        }

       
    }

    return 0;
}