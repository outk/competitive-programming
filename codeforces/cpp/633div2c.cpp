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

        std::stringstream ss;

        ll ans = 0, tmpmax = a.at(0);
        for (int i=1; i<n; i++) {
            if (a.at(i) < tmpmax) {
                ll tmp = tmpmax - a.at(i), tmpans = 0;
                for (int j=0; j<64; j++) {
                    if (tmp & (ll) pow(2, j)) tmpans = j+1;
                }
                if (ans < tmpans) ans = tmpans;
            } else {
                tmpmax = a.at(i);
            }
        }

        cout << ans << endl;
    }
}