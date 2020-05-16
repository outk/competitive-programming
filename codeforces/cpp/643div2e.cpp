#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, a, r, m;
    cin >> n >> a >> r >> m;

    vector<ll> h(n);
    ll sum = 0;
    for (int i=0; i<n; i++) {
        cin >> h.at(i);
        sum += h.at(i);
    }

    sort(h.begin(), h.end());

    ll ac = 0, rc = sum-n*h.at(0), mc = 0;

    ll ind = 0;

    ll ans = a*ac + r*rc + mc*m;

    for (int i=1; i<n; i++) {
        rc = rc - h.at(i) + h.at(i-1);
        if (a < m) {
            ac += h.at(i) - h.at(i-1);
        } else {
            if (rc)
        }
    }


    cout << ans << endl;
}