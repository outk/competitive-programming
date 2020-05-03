#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, k;
    cin >> n >> k;

    vector<ll> av(n, 0);

    for (int i=0; i<k; i++) {
        ll d;
        cin >> d;

        for (int j=0; j<d; j++) {
            ll a;
            cin >> a;
            av.at(a-1)++;
        }
    }
    ll ans = 0;

    for (int i=0; i<n; i++) {
        if (av.at(i) == 0) ans++;
    }
    cout << ans << endl;
}
