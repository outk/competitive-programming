#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    vector<ll> a(n);

    ll atmp;

    for (int i=0; i<n; i++) {
        cin >> atmp;
        a.at(i) = -atmp;
    }

    ll ans = 0;

    sort(a.begin(), a.end());

    ll ind = n/2;

    for (int i=0; i<ind; i++) {
        ans -= 2*a.at(i);
    }

    if (n%2) {
        ans -= a.at(ind);
    }

    ans += a.at(0);

    cout << ans << endl;
}