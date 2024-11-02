#include<bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);


    int testCase;
    cin >> testCase;

    while(testCase--){
        int a, b, c;
        cin >> a >> b >> c;

        int x = abs(a - b);

        if(a + b == c){
            cout << "+" << endl;
        }
        if(a - b == c){
            cout << "-" << endl;
        }
    } 
    return 0;
}