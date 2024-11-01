#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int a, b;

    cin >> a >> b;

    vector<int> arr(a);

    int count = 0;

    if(a < b){
        for(int i = a; i <= b; i++){
            count+= 1;
        }
    }

    cout << count << endl;

    return 0;
}