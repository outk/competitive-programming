#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;

    ll k;
    cin >> k;

    while (k) {
        if (a >= b) {
            b = b*2;
            k--;
        }
        if (a < b) break;
    }

    while (k) {
        if (b >= c) {
            c = c*2;
            k--;
        }
        if (b < c) break;
    }

    if (a < b && b < c) cout << "Yes" << endl;
    else cout << "No" << endl;
    
}