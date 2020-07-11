#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    for (int i=1; i<=n; i++) {
        ll ans = 0;
        for (int x=1; x<101; x++) {
            for (int y=1; y<101; y++) {
                ll p = 4*i-3*x*x-3*y*y-2*x*y;
                if (p > 0 && ((ll) sqrt(p))*((ll) sqrt(p)) == p && sqrt(p)-x-y > 1 && (((ll) sqrt(p))-x-y)%2 == 0) {
                    ans++;
                    // cout << i << " : " << x << " " << y << " " << (sqrt(p)-x-y)/2 << endl;
                }
            }
        }
        cout << ans << endl;
    }
        
}