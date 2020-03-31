#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    vector<ll> pn;
    for (int i=2; i<1000; i++) {
        bool failed=false;
        for (int j=2; j<=sqrt(i); j++) {
            if (i%j == 0) {
                failed = true;
                break;
            }
        }
        if (!failed) pn.push_back(i);
    }

    for (int tt=0; tt<t; tt++) {
        ll n;
        cin >> n;

        vector<vector<ll>> av(pn.size());
        vector<ll> a(n);
        for (int i=0; i<n; i++) {
            cin >> a.at(i);
            for (int j=0; j<pn.size(); j++) {
                if (a.at(i)%pn.at(j) == 0) {
                    av.at(j).push_back(a.at(i));
                }
            }
        }

        vector<ll> ans(n, 0);
        ll c = 0;
        ll p = 1;
        bool change = false;
        for (int i=0; i<pn.size(); i++) {
            change = false;
            for (int j=0; j<av.at(i).size(); j++) {
                for (int k=0; k<n; k++) {
                    if (a.at(k) == av.at(i).at(j) && ans.at(k) == 0) {
                        ans.at(k) = p;
                        c++;
                        change = true;
                        break;
                    } 
                }
            }
            if (c == n) break;
            if (change) p++;
        }

        cout << p << endl;

        for (int i=0; i<n; i++) {
            cout << ans.at(i) << " ";
        }

        cout << endl;

    }
}