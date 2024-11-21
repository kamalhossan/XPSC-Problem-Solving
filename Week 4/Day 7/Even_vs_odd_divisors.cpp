#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    int testCase;
    cin >> testCase;
    
    while(testCase--){
        int number;
        cin >> number;
        
        int evenCount = 0;
        int oddCout = 0;
        
        for(int i = 1; i <= number; i++){
            if(number % i == 0){
                if(i % 2 == 0){
                    evenCount++;
                }else {
                    oddCout++;
                }
            }
        }
        
        if(evenCount > oddCout){
            cout << 1 << endl;
        } else if(evenCount == oddCout){
            cout << 0 << endl;
        }else{
            cout << -1 << endl;
        }
    }
}
