#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans = "Yes";

    int n = s.size();

    for (int i=0; i<(n-1)/2; i++) {
        if (s.at(i) != s.at(n-1-i)) {
            ans = "No";
            break;
        }
    }

    for (int i=0; i<(n-1)/4; i++) {
        if (s.at(i) != s.at(((n-1)/2)-1-i)) {
            ans = "No";
            break;
        }
    }

    for (int i=0; i<(n-1)/4; i++) {
        if (s.at(((n-1)/2)+1+i) != s.at(n-1-i)) {
            ans = "No";
            break;
        }
    }

    cout << ans << endl;
}