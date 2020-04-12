#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    if (n%2) {
        ll ansl = 0, anslmin;
        ll ansr = 0;
        ll a;
        vector<ll> l(1+n/2, 0), r(n/2, 0);
        cin >> a;
        l.at(0) = a;
        ansl += a;
        anslmin = a;
        for (int i=1; i<n; i++) {
            cin >> a;
            if (i%2) {
                ansr += a;
                r.at(i/2) = r.at(i/2-1) + a;
            }
            else {
                ansl += a;
                l.at(i/2) = l.at(i/2-1) + a;
                if (a < anslmin) anslmin = a;
            }
        }
        ansl -= anslmin;

        ll ans = ansl;
        if (ansl > ansr) ans = ansr;

        for (int i=0; i<n; i++) {
            
        }
    } else {
        ll ansl = 0;
        ll ansr = 0;
        ll a;
        for (int i=0; i<n; i++) {
            cin >> a;
            if (i%2) ansr += a;
            else ansl += a;
        }
        if (ansl > ansr) cout << ansl << endl;
        else cout << ansr << endl;
    }
}