#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll x;
    cin >> x;

    set<ll> xset;

    for (int i=0; i<1000; i++) {
        xset.insert(x*x*x*x*x);
        xset.insert(-x*x*x*x*x);
    }

    for (int i=0; i<xset.size(); i++) {
        
    }
}