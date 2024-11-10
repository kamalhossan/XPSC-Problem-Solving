#include<bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
 
    int weekDay = 7;
    int numberOne, numberTwo;

    cin >> numberOne >> numberTwo;

    cout << weekDay - (numberOne + numberTwo) << endl;

    return 0;
}