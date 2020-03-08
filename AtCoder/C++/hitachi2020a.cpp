#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool hi=false;

    if (s.size()%2 == 0) {
        for (int i=0; i<s.size(); i += 2) {
            if (s.at(i) == 'h') {
                if (s.at(i+1) == 'i') hi = true;
            }
        }
    } 

    if (hi) cout << "Yes" << endl;
    else cout << "No" << endl;
}