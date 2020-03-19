#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        string s;
        cin >> s;

        int n=s.size();

        string l="", r="";
        int lind=0, lri=0, rli=n-1, rind=n-1;
        vector<int> R(n);

        int i = 0, j = 0;
        if (n%2) {
            while (i < n) {
                while (i-j >= 0 && i+j < n && s[i-j] == s[i+j]) ++j;
                R[i] = j;
                int k = 1;
                while (i-k >= 0 && i+k < n && k+R[i-k] < j) R[i+k] = R[i-k], ++k;
                i += k; j -= k;
            }

            string ans = "";        

            for (int ii=0; ii<n; ii++) {
                bool failed = false;
                string tmpans = "";
                if (ii-R[ii] < n-1-ii-R[ii]) {
                    for (int jj=0; jj<ii-R[ii]; jj++) {
                        if (s.at(jj) != s.at(n-1-ii)) {
                            failed = true;
                            break;
                        }
                    }
                    if (!failed) {
                        tmpans = s.substr(0, ii+R[ii]) + s.substr(n-ii+R[ii], n);
                        if (ans.size() < tmpans.size()) ans = tmpans;
                    }
                }
            }

            cout << ans << endl;
        }
        else {
            s += '@';

            while (i < n) {
                while (i-j >= 0 && i+j < n && s[i-j] == s[i+j]) ++j;
                R[i] = j;
                int k = 1;
                while (i-k >= 0 && i+k < n && k+R[i-k] < j) R[i+k] = R[i-k], ++k;
                i += k; j -= k;
            }

            string ans = "";        

            for (int ii=0; ii<n; ii++) {
                bool failed = false;
                string tmpans = "";
                if (ii-R[ii] < n-2-ii-R[ii]) {
                    for (int jj=0; jj<ii-R[ii]; jj++) {
                        if (s.at(jj) != s.at(n-2-ii)) {
                            failed = true;
                            break;
                        }
                    }
                    if (!failed) {
                        tmpans = s.substr(0, ii+R[ii]) + s.substr(n-1-ii+R[ii], n);
                        if (ans.size() < tmpans.size()) ans = tmpans;
                    }
                }
            }

            cout << ans << endl;
        }
    }
}