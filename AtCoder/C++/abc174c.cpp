#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll k;
    cin >> k;

    ll tmpk = k, rank = 0;

    while (tmpk) {
        tmpk /= 10;
        rank++;
    }

    ll ans = 1;
    if (k%2 == 0 && k/2 > 0) {
        ans = -1;
    } else {
        ll sevens = 7;
        for (int i=1; i<rank; i++) {
            sevens *= 10;
            sevens += 7;
            ans++;
        }
        ll amari = sevens%k;
        while (amari) {
            amari %= k;
            if (amari == 0) break;
            ans++;
            amari *= 10;
            amari += 7;
            if (ans >= 100000000) {
                ans = -1;
                break;
            }
        }
    }

    cout << ans << endl;
    
}