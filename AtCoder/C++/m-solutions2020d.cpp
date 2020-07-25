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

    bool posi = false;

    ll balance = 1000, stock = 0;

    if (a.at(0) < a.at(1)) {
        stock = balance/a.at(0);
        balance -= a.at(0) * stock;
        posi = true;
    }

    for (int i=1; i<n-1; i++) {
        if (posi) {
            if (a.at(i) > a.at(i+1)) {
                balance += stock * a.at(i);
                stock = 0;
                posi = false;
            }
        } else {
            if (a.at(i) < a.at(i+1)) {
                stock = balance/a.at(i);
                balance -= a.at(i) * stock;
                posi = true;
            }
        }
    }

    if (posi) {
        balance += stock * a.at(n-1);
    }

    cout << balance << endl;
}   