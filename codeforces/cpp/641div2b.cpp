#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        ll n;
        cin >> n;

        vector<ll> a(n);
        for (int i=0; i<n; i++) {
            cin >> a.at(i);
        }

        ll ans = 0;

        vector<ll> ansv(n, 1); 

        for (int i=0; i<=n/2; i++) {
            ll k = 2;
            while ((i+1)*k <= n) {
                if (a.at((i+1)*k-1) > a.at(i)) {
                    if (ansv.at((i+1)*k-1) < ansv.at(i) + 1) {
                        ansv.at((i+1)*k-1) = ansv.at(i) + 1;
                    }
                }
                k++;
            }
        }
        for (int i=0; i<n; i++) {
            if (ans < ansv.at(i)) ans = ansv.at(i);
        }
        cout << ans << endl;
    }
}