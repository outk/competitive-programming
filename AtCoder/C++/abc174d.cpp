#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    string c;
    cin >> c;

    vector<ll> rsumv(n, 0);
    if (c.at(0) == 'R') rsumv.at(0)++;

    for (int i=1; i<n; i++) {
        if (c.at(i) == 'R') {
            rsumv.at(i) = rsumv.at(i-1) + 1;
        } else rsumv.at(i) = rsumv.at(i-1);
    }
    ll rsum = rsumv.at(n-1);
    
    ll ans = 0;
    if (rsum) {
        ans = rsum - rsumv.at(rsum-1);
    }

    cout << ans << endl;

}