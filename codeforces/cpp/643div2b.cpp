#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        ll n;
        cin >> n;

        vector<ll> e(n);
        for (int i=0; i<n; i++) {
            cin >> e.at(i);
        }

        sort(e.begin(), e.end());

        ll ans = 0;

        ll ind = 0;

        ll mem = 0;

        for (int i=0; i<n; i++) {
            mem++;
            if (e.at(i) <= mem) {
                ans++;
                mem = 0;
            }
        }

        cout << ans << endl;
    }
}