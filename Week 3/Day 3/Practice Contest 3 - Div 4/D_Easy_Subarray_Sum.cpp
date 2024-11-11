#include<bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;
    while(testCase--){
        int arraySize;
        cin >> arraySize;

        vector<int> arr;
        int sumOfValues = 0;
        int operationcount = 0;

        for(int i = 0; i < arraySize; i++){
            int temp;
            cin >> temp;
            sumOfValues += temp;
            arr.push_back(temp);
        }

        for(auto i : arr){
            // if(sumOfValues > 0 && i < 0){
            //     operationcount++;
            // }

            cout << i << " ";
        }

        cout << endl;
        cout << sumOfValues << endl;
        // cout << operationcount << endl;

    }

 
    return 0;
}