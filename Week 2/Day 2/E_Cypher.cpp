#include<bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;

    cin >> testCase;

    while(testCase--){

        int numberOfWheels;
        cin >> numberOfWheels;

        vector<int> wheelsCurrentPosition;

        for(int i = 0; i < numberOfWheels; i++){
            int movesLength;
            cin >> movesLength;
            wheelsCurrentPosition.push_back(movesLength);
        }


        for(int i = 0; i < numberOfWheels; i++){
            int movesLength;
            cin >> movesLength;

            for(int j = 0; j < movesLength; j++){
                char direction;
                cin >> direction;



                if(direction == 'U'){
                    wheelsCurrentPosition[i]--;
                } else if(direction == 'D'){
                    wheelsCurrentPosition[i]++;
                }

                if(wheelsCurrentPosition[i] == 10){
                    wheelsCurrentPosition[i] = 0;
                }

                if(wheelsCurrentPosition[i] == -1){
                    wheelsCurrentPosition[i] = 9;
                }

                // cout << direction << " ";
            }

            // cout << endl;
        }

        
        for(auto i : wheelsCurrentPosition){
            cout << i << " ";
        }

        cout << endl;
    }
 
    return 0;
}