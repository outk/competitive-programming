#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<string, string>> s(n);
    string ss;

    for (int i=0; i<n; i++) {
        cin >> ss;
        s.at(i).second = ss;
        reverse(ss.begin(), ss.end());
        s.at(i).first = ss;
    }

    sort(s.begin(), s.end());

    for (int i=0; i<n; i++) {
        cout << s.at(i).second << endl;
    }
}