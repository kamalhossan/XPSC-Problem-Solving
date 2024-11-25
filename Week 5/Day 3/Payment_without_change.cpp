#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, n, s;
        cin >> a >> b >> n >> s;

        ll max_n_value = min(s / n, a); 
        ll remaining_s = s - (max_n_value * n);
        
        if (remaining_s <= b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
