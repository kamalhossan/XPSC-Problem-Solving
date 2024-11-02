#include<bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);


    string firstSentence, targetSentence;
    cin >> firstSentence >> targetSentence;

    int stringlength = firstSentence.length();
    int countDifference = 0;

    for(int i = 0; i < stringlength; i++){
        if(firstSentence[i] != targetSentence[i]){
            countDifference++;
        }
    }

    cout << countDifference << endl;
 
    return 0;
}