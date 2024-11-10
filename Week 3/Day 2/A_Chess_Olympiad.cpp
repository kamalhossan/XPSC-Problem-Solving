#include<bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y,z;
    cin >> x >> y >> z;

    int totalRound = x + y + z;

    int strictWinScore = 4 - totalRound;

    double myTeamScore = x * 1 + y * 0.5 + strictWinScore;
    double oponentScore = z * 1 + y * 0.5;

    if(myTeamScore > oponentScore){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}