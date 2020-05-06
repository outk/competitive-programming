#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        ll n;
        cin >> n;

        vector<ll> av(n, 0);
        ll a;
        string ans = "YES";
        for (int i=0; i<n; i++) {
            cin >> a;
            if (av.at((a+i)%n)) {
                ans = "NO";
            } else {
                av.at((a+i)%n)++;
            }
        }
        cout << ans << endl;

    }
}