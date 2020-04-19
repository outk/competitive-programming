#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    vector<ll> a(n-1), b(n, 0);
    for (int i=0; i<n-1; i++) {
        cin >> a.at(i);
        b.at(a.at(i)-1)++;
    }

    for (int i=0; i<n; i++) {
        cout << b.at(i) << endl;
    }
}