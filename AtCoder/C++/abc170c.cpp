#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll x, n;
    cin >> x >> n;

    vector<ll> p(n);
    for (int i=0; i<n; i++) {
        cin >> p.at(i);
    }

    sort(p.begin(), p.end());

    int j = 0;

    ll leftan, rightan;

    while (true) {
        vector<ll>::iterator it = find(p.begin(), p.end(), x-j);
        if (it == p.end()) {
            leftan = x-j;
            break;
        }
        j++;
    }

    j = 0;
    
    while (true) {
        vector<ll>::iterator it = find(p.begin(), p.end(), x+j);
        if (it == p.end()) {
            rightan = x+j;
            break;
        }
        j++;
    }

    ll ans = leftan;
    if (rightan - x < x - leftan) {
        ans = rightan;
    }

    cout << ans << endl;
}