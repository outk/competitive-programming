#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, k;
    cin >> n >> k;

    ll ans = n % k;

    if (abs(ans-k) < ans) ans = abs(ans-k);

    cout << ans << endl;
}