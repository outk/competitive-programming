#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, ans = 0;
    cin >> n;

    for (int i=1; i<=n; i++) {
        if (i >= 3 && i%3 == 0) {continue;}
        if (i >= 5 && i%5 == 0) {continue;}
        ans += i;
    }

    cout << ans << endl;
}