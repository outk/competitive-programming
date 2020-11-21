#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    for (int tt = 0; tt < t; tt++) {
        ll n, k;
        cin >> n >> k;

        string a, b;
        cin >> a;
        cin >> b;

        vector<vector<ll>> acounts(n, vector<ll>(26)), bcounts(n, vector<ll>(26));
        for (int i = 0; i < n; i++) {
            acounts.at(i).at(a.at(i)-'a') += 1;
            bcounts.at(i).at(b.at(i)-'a') += 1;
        }

        string ans = "Yes";

        for (int i=1; i<n; i++) {
            for (int j=0; j<26; j++) {
                acounts.at(i).at(j) += acounts.at(i-1).at(j);
                bcounts.at(i).at(j) += bcounts.at(i-1).at(j);
            }
        }

        vector<ll> suma(26), sumb(26);
        suma.at(0) = acounts.at(n-1).at(0);
        sumb.at(0) = bcounts.at(n-1).at(0);
        for (int i=1; i<26; i++) {
            suma.at(i) = suma.at(i-1) + acounts.at(n-1).at(i);
            sumb.at(i) = sumb.at(i-1) + bcounts.at(n-1).at(i);
        }

        for (int i=0; i<26; i++) {
            if (suma.at(i) < sumb.at(i)) {
                ans = "No";
                break;
            }
        }

        for (int i=0; i<26; i++) {
            ll diff = bcounts.at(n-1).at(i) - acounts.at(n-1).at(i);
            if (diff > 0) {
                if (diff%k != 0 || diff/k == 0) {
                    ans = "No";
                    break;
                }
            }
            
        }

        cout << ans << endl;

    }

}