#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int tt=0; tt<t; tt++) {
        string s, an = "";
        cin >> s;

        int n = s.size();

        vector<string> lv(n, ""), rv(n, "");

        int prev = 0;

        for (int i=0; i<n; i++) {
            int now = (int) s.at(i)-'0';
            if (prev <= now) {
                for (int j=0; j<now-prev; j++) {
                    lv.at(i) += "(";
                }
            }
            prev = now;
        }

        prev = 0;

        for (int i=0; i<n; i++) {
            int now = (int) s.at(n-1-i) - '0';
            if (prev <= now) {
                for (int j=0; j<now-prev; j++) {
                    rv.at(n-1-i) += ")";
                }
            }
            prev = now;
        }

        string ans = "";

        for (int i=0; i<n; i++) {
            ans += lv.at(i) + s.at(i) + rv.at(i);
        }
        
        cout << "Case #" << tt+1 << ": " << ans << endl;
    }
}