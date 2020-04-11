#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        ll n;
        cin >> n;

        vector<string> pleft(n), pright(n);

        ll maxl=0, maxr=0, maxli=0, asti=0;

        string ansl = "", ansr = "", p;

        for (int i=0; i<n; i++) {
            cin >> p;
            for (int j=0; j<p.size(); j++) {
                if (p.at(j) == '*') {
                    asti = j;
                    break;
                }
            }
            pleft.at(i) = p.substr(0, asti);
            pright.at(i) = p.substr(asti+1, p.size()-1-asti);
            if (asti > maxl) {
                maxl = asti;
                ansl = p.substr(0, asti);
            }
            if (p.size()-1-asti > maxr) {
                maxr = p.size()-1-asti;
                ansr = p.substr(asti+1, p.size()-1-asti);
            }
        }

        bool failed = false;

        for (int i=0; i<n; i++) {
            for (int j=0; j<pleft.at(i).size(); j++) {
                if (ansl.at(j) != pleft.at(i).at(j)) {
                    ansl = "*";
                    failed = true;
                    break;
                }
            }
            if (failed) break;
        }

        if (!failed) {
            for (int i=0; i<n; i++) {
                for (int j=0; j<pright.at(i).size(); j++) {
                    if (ansr.at(ansr.size()-1-j) != pright.at(i).at(pright.at(i).size()-1-j)) {
                        ansr = "";
                        failed = true;
                        break;
                    }
                }
                if (failed) break;
            }
        }

        if (failed) cout << "Case #" << tt+1 << ": " << "*" << endl;
        else cout << "Case #" << tt+1 << ": " << ansl << ansr << endl;
    }

    
}