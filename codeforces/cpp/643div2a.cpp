#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        ll a, k;
        cin >> a >> k;

        ll n = 0, tmpa = a;

        while (tmpa) {
            tmpa = tmpa/10;
            n++;
        }

        // cout << a << endl;

        vector<ll> av(n);
        ll mina = 10, maxa = 0;
        tmpa = a;
        for (int i=0; i<n; i++) {
            av.at(n-1-i) = tmpa-(tmpa/10)*10;
            tmpa = tmpa/10;
            if (av.at(n-1-i) > maxa) maxa = av.at(n-1-i);
            if (av.at(n-1-i) < mina) mina = av.at(n-1-i);
        }

        k--;

        while (mina != 0 && k > 0) {
            a = a + mina*maxa;
            // cout << a << endl;
            mina = 10;
            maxa = 0;
            n = 0;
            tmpa = a;
            while (tmpa) {
                tmpa = tmpa/10;
                n++;
            }
            tmpa = a;
            vector<ll> avv(n);
            for (int i=0; i<n; i++) {
                avv.at(n-1-i) = tmpa-(tmpa/10)*10;
                tmpa = tmpa/10;
                if (avv.at(n-1-i) > maxa) maxa = avv.at(n-1-i);
                if (avv.at(n-1-i) < mina) mina = avv.at(n-1-i);
            }
            k--;
        }

        cout << a << endl;
    }
}