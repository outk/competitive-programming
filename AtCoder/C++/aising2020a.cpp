#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll l, r, d;
    cin >> l >> r >> d;

    ll ans = 0;

    for (int i = l; i<r+1; i++)  {
        if (i%d == 0 && i/d > 0) ans++;
    }

    cout << ans << endl;
}