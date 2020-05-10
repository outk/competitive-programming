#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, m, x;
    cin >> n >> m >> x;

    vector<vector<ll>> a(n, vector<ll>(m));
    vector<ll> c(n);
    for (int i=0; i<n; i++) {
        cin >> c.at(i);
        for (int j=0; j<m; j++) {
            cin >> a.at(i).at(j);
        }
    } 

    ll iter=0, ans = 1000000000;

    while (iter < pow(2, n)) {
        iter++;
        bool failed = false;
        for (int i=0; i<m; i++) {
            ll itemind=0, skillpoint = 0;
            for (int j=1; j<pow(2, n); j = j*2) {
                if (j & iter) {
                    skillpoint += a.at(itemind).at(i);
                }
                itemind++;
            }
            if (skillpoint < x) {
                failed = true;
                break;
            }
        }
        if (!failed) {
            ll totc = 0, tmpiter = iter, itemind = 0;
            while (tmpiter > 0) {
                if (1 & tmpiter) totc += c.at(itemind);
                tmpiter /= 2;
                itemind++;
            } 
            if (ans > totc) ans = totc;
        }
    }

    if (ans != 1000000000) cout << ans << endl;
    else cout << -1 << endl;
}