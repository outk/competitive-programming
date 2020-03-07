#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, ls="", rs = "";
    cin >> s;

    int q;
    cin >> q;

    bool reversed = false;

    for (int i=0; i<q; i++){
        int t;
        cin >> t;

        if (t == 1) {
            reversed ^= true;
        } else {
            int f;
            cin >> f;
            char c;
            cin >> c;

            if (f == 1) {
                if (reversed) rs += c;
                else ls += c;
            } else {
                if (reversed) ls += c;
                else rs += c;
            }
        }
    }

    if (reversed) {
        reverse(rs.begin(), rs.end());
        reverse(s.begin(), s.end());
        string anss = rs + s + ls;
        for (int i=0; i<anss.size(); i++) {
            cout << anss.at(i);
        }
        cout << endl;
    } else {
        reverse(ls.begin(), ls.end());
        string anss = ls + s + rs;
        for (int i=0; i<anss.size(); i++) {
            cout << anss.at(i);
        }
        cout << endl;
    }
}