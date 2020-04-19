#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, m, msum = 0;
    cin >> n >> m;

    ll a;
    for (int i=0; i<m; i++) {
        cin >> a;
        msum += a;
    }

    if (n - msum >= 0) cout << n - msum << endl;
    else cout << -1 << endl;



}