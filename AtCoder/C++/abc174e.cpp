#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, k;
    cin >> n >> k;

    ll suma = 0, a, maxa = 1000000001;
    for (int i=0; i<n; i++) {
        cin >> a;
        suma += a;
        if (maxa < a) maxa = a;
    }

    ll ans = maxa;
    if (k) {
        ans = suma/(k+1);
    }

    if (suma%(k+1)) {
        ans++;
    }
    cout << ans << endl;
}