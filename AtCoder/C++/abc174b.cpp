#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, d;
    cin >> n >> d;

    ll ans = 0;
    for (int i=0; i<n; i++) {
        ll x, y;
        cin >> x >> y;
        if (d*d >= x*x + y*y) ans++;
    }
    cout << ans << endl;
}