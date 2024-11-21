#include<bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int RCBSCores, CSKCore;
    cin >> RCBSCores >> CSKCore;

    int difference = RCBSCores - CSKCore;

    if(difference >= 18){
        cout << "RCB" << endl;
    } else {
        cout << "CSK" << endl;
    }
 
    return 0;
}