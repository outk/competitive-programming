#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        int n;
        cin >> n;

        vector<vector<int>> se(n, vector<int>(3));

        vector<char> av(n);

        for (int i=0; i<n; i++) {
            cin >> se.at(i).at(0) >> se.at(i).at(1);
            se.at(i).at(2) = i;
        }

        string ans = "";

        sort(se.begin(), se.end());

        int c=0, j=0;

        bool failed = false;

        for (int i=0; i<n; i++) {
            if (se.at(i).at(0) >= c) {
                c = se.at(i).at(1);
                av.at(se.at(i).at(2)) = 'C';
            } else {
                if (se.at(i).at(0) >= j) {
                    j = se.at(i).at(1);
                    av.at(se.at(i).at(2)) = 'J';
                } else {
                    failed = true;
                    break;
                }
            }
        }

        if (failed) ans = "IMPOSSIBLE";
        else {
            for (int i=0; i<n; i++) ans += av.at(i);
        }

        cout << "Case #" << tt+1 << ": " << ans << endl;
    }
}