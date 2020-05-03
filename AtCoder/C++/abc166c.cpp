#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, m;
    cin >> n >> m;

    vector<ll> h(n);
    for (int i=0; i<n; i++) {
        cin >> h.at(i);
    }

    vector<vector<ll>> br(n, vector<ll>());
    for (int i=0; i<m; i++) {
        ll a, b;
        cin >> a >> b;
        br.at(a-1).push_back(b-1);
        br.at(b-1).push_back(a-1);
    }

    ll ans = 0;
    vector<bool> visited(n, false);
    for (int i=0; i<n; i++) {
        if (!visited.at(i)) {
            visited.at(i) = true;
            ll highest = i;
            for (int j=0; j<br.at(i).size(); j++) {
                if (h.at(br.at(i).at(j)) >= h.at(highest)) highest = br.at(i).at(j);
            }
            if (highest == i) {
                for (int j=0; j<br.at(i).size(); j++) {
                    visited.at(br.at(i).at(j)) = true;
                }
                ans++;
            }
        }
    }

    cout << ans << endl;


}
