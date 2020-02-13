#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int p=0; p<t; p++) {
        string a,b,c;
        cin >> a >> b >> c;

        bool failed = false;
        
        for (int i=0; i<a.size(); i++) {
            if (a.at(i) != c.at(i) && b.at(i) != c.at(i)) {
                failed = true;
                break;
            }
        }
        if (failed) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}