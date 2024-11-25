#include<bits/stdc++.h>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int bonesTreats, bloodTreats;
    cin >> bonesTreats >> bloodTreats;

    int totalBones = bonesTreats * n;
    int totalBlood = bloodTreats * m;

    cout << totalBlood + totalBones << endl;


    return 0;
}