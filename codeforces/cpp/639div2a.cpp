#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        ll n, m;
        cin >> n >> m;

        if (n == 1 || m == 1) cout << "YES" << endl;
        else if (n == 2 && m == 2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}