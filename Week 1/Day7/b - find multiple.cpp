#include<bits/stdc++.h>
using namespace std;
int main(){

    int  a, b, c;
    cin >> a >> b >> c;

//     int multiValue = c;

//     vector<int> multipliedValues;

//     int i  = 1;

//     while(multiValue < b){
//         i++;
//         multiValue = c * i;
//         if(multiValue > b) break;
//         else multipliedValues.push_back(c * i);
//     }

//     bool found = false;
//     int multiFoundValue = 0;

//     for(auto x : multipliedValues){
//         if(x >= a && x <= b){
//             found = true;
//             multiFoundValue = x;
//         }
//         if(found) break;
//     }

//     if(found){
//         cout << multiFoundValue << endl; 
//     } else {
//         cout << -1 << endl;
//     }

 
    int start = (a + c - 1) / c * c;

    if (start >= a && start <= b) {
        cout << start << endl;
    } else {
        cout << -1 << endl;
    }

     return 0;
}

