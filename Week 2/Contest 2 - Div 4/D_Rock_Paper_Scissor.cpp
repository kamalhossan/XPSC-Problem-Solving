// Chef and Chefina are playing the famous game of Rock, Paper, Scissors.
// The game consists of N
// N rounds. In each round, both players choose one of the three moves: Rock, Paper, or Scissors, denoted by R, P, and S respectively.

// If both players play the same move, the current round ends in a draw and neither of them gets a point.
// If one of the players plays Rock and the other plays Scissors, the player who played Rock wins the round and gets a point.
// If one of the players plays Scissors and the other plays Paper, the player who played Scissors wins the round and gets a point.
// If one of the players plays Paper and the other plays Rock, the player who played Paper wins the round and gets a point.

// The winner of the game is the player who gets the maximum number of points after playing all the rounds. If both players have the same number of points, then the game ends in a draw.

// You are given two strings A and B each of length N, consisting of uppercase English letters R, P, and S, where 
// A
// i
// A 
// i
// ​
//   denotes the move made by Chef in the 
// i
// t
// h
// i 
// th
//   round and 
// B
// i
// B 
// i
// ​
//   denotes the move made by Chefina in the 
// i
// t
// h
// i 
// th
//   round.

// Find the minimum number of rounds Chef should have played differently to have won the game.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains an integer 
// N
// N — the number of rounds.
// The second line contains string 
// A
// A of length 
// N
// N denoting the moves played by Chef.
// The third line contains string 
// B
// B of length 
// N
// N denoting the moves played by Chefina.

// Output Format
// For each test case, output on a new line, the minimum number of rounds Chef should have played differently to have won the game.

// sample input 1
// 3
// 3
// RRR
// SPP
// 2
// RP
// SP
// 3
// PSP
// SRP

// **Test case 
// 1
// 1:** Chef has a score of 
// 1
// 1 while Chefina has a score of 
// 2
// 2. To win the game, Chef should have played at least 
// 1
// 1 round differently. A sequence of moves like `RSR` would have led in Chef winning the game.
// Test case 
// 2
// 2: Chef has a score of 
// 1
// 1 while Chefina has a score of 
// 0
// 0. Chef is already winning the game.

// Test case 

// 3: Chef has a score of 
// 0 while Chefina has a score of 
// 2. To win the game, Chef should have played at least 
// 2 rounds differently.
// Note that Chef should have played only 
// 1 round differently to draw the game but 
// 2 rounds differently to win.


#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;

    while (testCase--) {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        int chefScore = 0;
        int chefinaScore = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) {
                continue; // Draw, no points
            } else if ((a[i] == 'R' && b[i] == 'S') || 
                       (a[i] == 'S' && b[i] == 'P') || 
                       (a[i] == 'P' && b[i] == 'R')) {
                chefScore++; // Chef wins this round
            } else {
                chefinaScore++; // Chefina wins this round
            }
        }

        // Determine the minimum changes needed for Chef to win
        int scoreDifference = chefinaScore - chefScore;

        // If Chef is already winning
        if (scoreDifference < 0) {
            cout << 0 << endl; // No changes needed
        } else {
            // Chef needs to convert at least scoreDifference + 1 rounds to win
            cout << scoreDifference + 1 << endl;
        }
    }

    return 0;
}
