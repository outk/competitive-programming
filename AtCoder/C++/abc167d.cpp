#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i=0; i<n; i++) {
        cin >> a.at(i);
    }

    vector<ll> visited(n, -1);
    visited.at(0) = 1;
    ll m = 0;
    ll now = 0, endind;
    while (visited.at(now) == -1) {
        visited.at(now) = m;
        now = a.at(now)-1;
        m++;
        if (visited.at(now) != -1) {
            endind = now;
            m -= visited.at(now);
        }
    }

    k = k%m;

    now = endind;
    for (int i=0; i<k; i++) {
        now = a.at(now)-1;
    }

    cout << now+1 << endl;
}