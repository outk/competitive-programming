#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll x, y;
    cin >> x >> y;

    string ans;
    if (4*x < y || y%2 == 1 || 2*x > y) {
        ans = "No";
    } else {
        ans = "Yes";
    }

    cout << ans << endl;
}