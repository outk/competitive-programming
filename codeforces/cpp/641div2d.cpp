#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        ll n, k;
        cin >> n >> k;

        string ans = "no";

        bool exist = false;

        vector<ll> a(n);
        for (int i=0; i<n; i++) {
            cin >> a.at(i);
            if (a.at(i) == k) exist = true;
        }

        ll prev = (n+1)/2+1, now = prev-1;

        if (exist) {
            while (now < prev) {
                if (a.at(now-1) == k) {
                    ans = "yes";
                    break;
                } else {
                    prev = now;
                    now = (now+1)/2;
                }
            }
            cout << ans << endl;
        } else {
            cout << "no" << endl;
        }



    }
}