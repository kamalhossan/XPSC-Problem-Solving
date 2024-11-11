#include<bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
 
    int testCase;
    cin >> testCase;

    while(testCase--){
        int numberOfHours, priceOfTypeOne, priceOfTypeTwo;
        cin >> numberOfHours >> priceOfTypeOne >> priceOfTypeTwo;


        int maxTypeTwoSession = numberOfHours / 2;
        int remainingHours = numberOfHours % 2;

        int initialCostInTypeOne = numberOfHours * priceOfTypeOne;
        int InitialCostInTypeTwo = numberOfHours / 2 * priceOfTypeTwo + remainingHours * priceOfTypeOne;

        int maxInitialCost = max(initialCostInTypeOne, InitialCostInTypeTwo);

        cout << maxInitialCost << endl;

    }

    return 0;
}