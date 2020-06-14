#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, q;
    cin >> n >> q;

    vector<priority_queue<ll>> p(200000, priority_queue<ll>());

    vector<pair<ll, ll>> ab(n);
    for (int i=0; i<n; i++) {
        cin >> ab.at(i).first >> ab.at(i).second;
        p.at(ab.at(i).second-1).push(-ab.at(i).first);
    }

    ll c, d;

    for (int i=0; i<q; i++) {
        cin >> c >> d;
        c--;
        d--;
        p.at(d).push(-ab.at(c).first);
        ll item = 0;
        vector<ll> tempv;
        if (!p.at(ab.at(c).second-1).empty()) {
            while (item == -ab.at(c).first) {
                item = p.at(ab.at(c).second-1).top();
                p.at(ab.at(c).second-1).pop();
                if (item == -ab.at(c).first) {
                    break;
                } else {
                    tempv.push_back(item);
                }
            }
            for (int j=0; j<tempv.size(); j++) {
                p.at(ab.at(c).second-1).push(tempv.at(j));
            }
        }
    }

    ll ic = 0, sum = 0;
    for (int i=0; i<200000; i++) {
        if (!p.at(i).empty()){
            sum += -p.at(i).top();
            ic++;
            cout << i << endl;
            cout << -p.at(i).top() << endl;
        }
    }

}