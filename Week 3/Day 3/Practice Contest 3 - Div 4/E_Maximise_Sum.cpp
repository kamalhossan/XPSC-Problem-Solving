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
         int sum = 0;

        int arr[arraySize];
        for(int i = 0; i < arraySize; i++){
            cin >> arr[i];
            sum += arr[i];
        }

        cout << sum << endl;

    }
 
    return 0;
}