#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        ll n;
        cin >> n;

        vector<ll> pas(1000, -1);
        vector<vector<ll>> pasnei(1000, vector<ll>());

        ll ind = 0, pasvalue = 1, edgeind=0;

        for (int i=0; i<=40; i++) {
            for (int j=0; j<=i; j++) {
                if (j == 0 || i == 0) {
                    pas.at(ind) = 1;
                    pasvalue = 1;
                    if (j != i) {
                        pasnei.at(ind).push_back(ind+1);
                        pasnei.at(ind+1).push_back(ind);
                    }
                    pasnei.at(ind).push_back(ind+i+1);
                    pasnei.at(ind+1+i).push_back(ind);
                    pasnei.at(ind).push_back(ind+i+2);
                    pasnei.at(ind+2+i).push_back(ind);
                    ind++;
                } else {
                    pas.at(ind) = pasvalue*(i-j+1)/j;
                    pasvalue = pasvalue*(i-j+1)/j;
                    ind++;
                }
            }
        }

        stack<ll> nxt;
        vector<ll> ans;

        ll anssum = 0;

        nxt.push(0);

        ll now;

        while (true) {
            now = nxt.top();
            nxt.pop();
            ans.push_back(now);
            if (anssum + pas.at(now) == n) {
                break;
            } else if (anssum + pas.at(now) < n) {
                for (int i=0; i<pasnei.at(now).size(); i++) {
                    if (pas.at(pasnei.at(now).at(i)) != -1) {
                        nxt.push(pasnei.at(now).at(i));
                    }
                }
            } else {
                ans.pop_back();
            }
        }

        // for (int i=0; i<=40; i++) {
        //     for (int j=0; j<=i; j++) {
        //         cout << pas.at(j+i*(i+1)/2) << " ";
        //     }
        //     cout << endl;
        // }

        cout << "Case #" << tt+1 << ": " << endl;

        for (int i=0; i<ans.size(); i++) {
            cout << ans.at(i) << endl;
        }

    }
}