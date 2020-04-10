#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        int n;
        cin >> n;

        vector<ll> a(n), c(n);

        ll b;

        cin >> a.at(0) >> b;

        ll ans = a.at(0), tmpans;
        
        for (int i=1; i<n; i++) {
            cin >> a.at(i);;
            c.at(i) = a.at(i) - b;
            if (c.at(i) > 0) ans += c.at(i);
            cin >> b;
        }

        c.at(0) = a.at(0) - b;

        tmpans = ans;

        for (int i=1; i<n; i++) {
            tmpans = tmpans - a.at(i-1) + a.at(i);
            if (c.at(i-1) > 0) tmpans += c.at(i-1);
            if (c.at(i) > 0) tmpans -= c.at(i);
            if (tmpans < ans) ans = tmpans;
        }

        cout << ans << endl;
    }
}