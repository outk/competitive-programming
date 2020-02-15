#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    vector<string> sls(n);

    vector<bool> revls(n, false);
    vector<bool> usedls(n, false);

    int ansc = 0;

    for (int i=0; i<n; i++) {
        cin >> sls.at(i);
    }

    string cs = "", aa="";

    for (int i=0; i<n; i++) {
        string s=sls.at(i);
        reverse(s.begin(), s.end());
        if (sls.at(i) == s) revls.at(i) = true;
    }

    for (int i=0; i<n; i++) {
        if (revls.at(i)) {
            cs = sls.at(i);
            for (int j=i+1; j<n; j++) {
                if (sls.at(i) == sls.at(j)) {
                    revls.at(i) = false;
                    revls.at(j) = false;
                    usedls.at(i) = true;
                    usedls.at(j) = true;
                    ansc += 2;
                    cs = "";
                    break;
                } 
            }
            if (cs != aa) {
                usedls.at(i) = true;
                ansc++;
                break;
            }
        }
    }

    string anssl = "", anssr = "";

    string tmps="";

    for (int i=0; i<n; i++) {
        if (usedls.at(i) == false) {
            tmps = sls.at(i);
            reverse(tmps.begin(), tmps.end());
            for (int j=i+1; j<n; j++) {
                if (tmps == sls.at(j)) {
                    ansc += 2;
                    anssl += sls.at(i);
                    anssr = sls.at(j) + anssr;
                    usedls.at(i) = true;
                    usedls.at(j) = true;
                    break;
                }
            }
        }
    }

    cout << ansc*m << endl;
    cout << anssl << cs << anssr << endl;

}