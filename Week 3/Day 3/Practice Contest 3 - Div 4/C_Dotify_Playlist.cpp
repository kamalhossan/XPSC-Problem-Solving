#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;

    while (testCase--) {
        int totalNumberOfSongs, numberOfSongNeeded, requiredLanguage;
        cin >> totalNumberOfSongs >> numberOfSongNeeded >> requiredLanguage;

        map<int, priority_queue<int>> mp;

        for (int i = 0; i < totalNumberOfSongs; i++) {
            int songLength, songLanguage;
            cin >> songLength >> songLanguage;
            mp[songLanguage].push(songLength); 
        }

        auto it = mp.find(requiredLanguage);

        int totalLength = 0;

        if (it != mp.end()) {
            if (it->second.size() < numberOfSongNeeded) {
                cout << -1 << endl; 
            } else {
                while (numberOfSongNeeded && !it->second.empty()) {
                    totalLength += it->second.top();
                    it->second.pop(); 
                    numberOfSongNeeded--;
                }
                cout << totalLength << endl;
            }
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
