#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (int i=0; i<n; i++) {
        cin >> a.at(i);
    }

    ll ans = 1;
    map<ll, pair<ll,ll>> m;
    for (int i=0; i<2; i++) {
        ll tmp = a.at(i);
        for (int j=2; j<=sqrt(a.at(i)); j++) {
            while (tmp%j) {
                if (m.find(j) == m.end()) {
                    m[j].first = 0;
                    m[j].second = 1;
                } else {
                    m[j].second++;
                }
            }
        }
    }
    for (int i=2; i<n; i++) {
        ll tmp = a.at(i);
        for (int j=2; j<=sqrt(a.at(i)); j++) {
            while (tmp%j) {

            }
        }
        
    }
        
    
}