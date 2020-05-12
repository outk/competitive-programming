#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        ll n, k;
        cin >> n >> k;
        
        ll ans=0;

        if (n%2) {
            ll tmpn=n;
            ll i = 3;
            while (tmpn%i) {
                i += 2;
            }
            ans = n + i + (k-1)*2;
        } else {
            ans = n + 2*k;
        }
        cout << ans << endl;
    }
}