#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    vector<ll> nexta(n, 0);
    vector<pair<ll, ll>> rangea(n);
    ll minind = 0;

    ll mina = 1000000;

    for (int i=0; i<n; i++) {
        cin >> nexta.at(i);
        rangea.at(i).first = i - nexta.at(i);
        rangea.at(i).second = i + nexta.at(i);
        if (mina > nexta.at(i)) {
            mina = nexta.at(i);
            minind = i;
        }
    }

    for (int i=0; i<n; i++) {
        
    }
    
}