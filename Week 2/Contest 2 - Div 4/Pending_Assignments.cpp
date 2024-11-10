// Chef has finally decided to complete all of his pending assignments.

// There are 
// X
// X assignments where each assignment takes 
// Y
// Y minutes to complete.
// Find whether Chef would be able to complete all the assignments in 
// Z
// Z days.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case consists three space-separated integers 
// X
// ,
// Y
// ,
// X,Y, and 
// Z
// Z — the number of assignments, time taken in minutes to complete each assignment, and the number of days in which Chef wants to complete the assignments.
// Output Format
// For each test case, output on a new line, YES, if Chef would be able to complete all the assignments in 
// Z
// Z days. Otherwise, print NO.

// You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

#include<bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cin >> testCase;

    while(testCase--){

        int assignments, time, days;
        cin >> assignments >> time >> days;

        if((assignments * time) <= days * 24 * 60){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
 
    return 0;
}