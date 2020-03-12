#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin >> a.at(i);
        }

        string ans = "NO";

        vector<int> c(n, -1);

        for (int i=0; i<n; i++) {
            if (c.at(a.at(i)-1) == -1) c.at(a.at(i)-1) = i;
            else if (c.at(a.at(i)-1) < i-1) {
                ans = "YES";
                break;
            }
        }

        cout << ans << endl;
    }
}