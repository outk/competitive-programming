#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll a, b, c, k;
    cin >> a >> b >> c >> k;

    ll ans = 0;

    if (k <= a + b) {
        if (a <= k) ans = a;
        else ans = k;
    } else {
        ans = a - (k-a-b);
    }

    cout << ans << endl;
}