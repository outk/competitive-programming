#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        ll n, x;
        cin >> n >> x;

        vector<ll> a(n), ap(n);
        for (int i=0; i<n; i++) {
            cin >> a.at(i);
            ap.at(i) = a.at(i) - x;
        }

        vector<ll> minas(0);
        ll ans = 0, pra = 0, mi = 0;
        for (int i=0; i<n; i++) {
            if (ap.at(i) < 0) {
                minas.push_back(-ap.at(i));
            } else if (ap.at(i) > 0) {
                pra += ap.at(i);
                ans++;
            } else {
                ans++;
            }
        }

        sort(minas.begin(), minas.end());

        mi = 0;

        for (int i=0; i<minas.size(); i++) {
            mi += minas.at(i);
            if (mi <= pra) ans ++;
            else break;
        }
        
        cout << ans << endl;
    }
}