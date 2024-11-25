#include<bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    cin >> testcase;

    while(testcase--){
        int numberOfPekomons, normalPekoball, MasterPekoballCost;
        cin >> numberOfPekomons >> normalPekoball >> MasterPekoballCost;

        int arr[numberOfPekomons];

        for(int i = 0; i < numberOfPekomons; i++){
            cin >> arr[i];
        }

        int totalValue = 0;

        for(int i = 0; i < numberOfPekomons; i++){
                 
            int normalCost = normalPekoball * arr[i];
            if(normalCost > MasterPekoballCost){
                totalValue += MasterPekoballCost; 
            } else {
                totalValue += normalCost;  
            }


        }
        cout << totalValue << endl;
    }
 
    return 0;
}