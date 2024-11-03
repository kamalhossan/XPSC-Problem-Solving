#include<bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;

    cin >> testCase;

    while(testCase--){

        vector<string> colors(2);

        int column;
        cin >> column;

        for(int i = 0; i < 2; i++){
            for(int j = 1; j <= column; j++){
                char temp;
                cin >> temp;

                if(temp == 'G' || temp == 'B'){
                    temp = 'C';
                }

                colors[i].push_back(temp);
            }
        }

        if(colors[0] == colors[1]){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
 
    return 0;
}