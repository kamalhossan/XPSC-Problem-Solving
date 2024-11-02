#include<bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int aOfLength, targetInt;
    cin >> aOfLength >> targetInt;

//     map<int, int> myMap;
//     for(int i = 0; i < aOfLength; i++){
//         int x;
//         cin >> x;
//         myMap[x]++;
//     }

//     myMap.erase(targetInt);

//     for(auto it : myMap){
//         cout << it.first << " ";
//     }
  

    vector<int> arr(aOfLength);

    for(int i = 0; i < aOfLength; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < aOfLength; i++) {
        if(arr[i] != targetInt) {
            cout << arr[i] << " "; 
        }
    }

    cout << endl;
    return 0;
}
