#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        ll n;
        cin >> n;

        ll a;

        vector<ll> pa, ma;

        for (int i=0; i<n; i++) {
            cin >> a;
            if (a < 0) ma.push_back(-1*a);
            else pa.push_back(a);
        }

        sort(pa.begin(), pa.end());
        sort(ma.begin(), ma.end());

        if (pa.size() > ma.size()) {
            vector<ll> ansls(pa.size()-ma.size());
            for (int i=0; i<pa.size()-ma.size(); i++) {
                if (i%2) ansls.at(pa.size()-ma.size()-1-i) = pa.at(i/2);
                else {
                    ansls.at(pa.size()-ma.size()-1-i) = pa.at(pa.size()-ma.size()-1-i/2);
                }
            }
            for (int i=0; i<pa.size()-ma.size(); i++) {
                cout << ansls.at(i) << " ";
            }
            for (int i=0; i<ma.size(); i++) {
                cout << -1*ma.at(i) << " ";
                cout << pa.at(pa.size()-ma.size()+i) << " ";
            }
            cout << endl;
        } else {
            vector<ll> ansls(ma.size()-pa.size());
            for (int i=0; i<ma.size()-pa.size(); i++) {
                if (i%2) ansls.at(ma.size()-pa.size()-1-i) = ma.at(i/2);
                else {
                    ansls.at(ma.size()-pa.size()-1-i) = ma.at(ma.size()-pa.size()-1-i/2);
                }
            }
            for (int i=0; i<ma.size()-pa.size(); i++) {
                cout << -1*ansls.at(i) << " ";
            }
            for (int i=0; i<pa.size(); i++) {
                cout << pa.at(i) << " ";
                cout << -1*ma.at(ma.size()-pa.size()+i) << " ";
            }
            cout << endl;
        }
    }
}