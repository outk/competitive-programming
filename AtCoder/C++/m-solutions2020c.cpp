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

    for (int i=k; i<n; i++) {
        if (a.at(i-k) >= a.at(i)) cout << "No" << endl;
        else cout << "Yes" << endl;
    }


}