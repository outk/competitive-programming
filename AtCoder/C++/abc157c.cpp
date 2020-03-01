#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> numbmer(n, -1);

    bool failed = false;

    for (int i=0; i<m; i++) {
        int s,c;
        cin >> s >> c;

        if (numbmer.at(s-1) == -1 || numbmer.at(s-1) == c) {
            numbmer.at(s-1) = c;
        } else {
            failed = true;
        }
    }

    if (numbmer.at(0) == 0 && n != 1) failed = true;

    if (failed) {
        cout << -1 << endl;
    } else {
        if (n == 1) {
            if (numbmer.at(0) == -1) cout << 0 << endl;
            else cout << numbmer.at(0) << endl;
        } else {
            if (numbmer.at(0) == -1) {
                cout << 1;
                for (int i=0; i<n-1; i++) {
                    if (numbmer.at(i+1) == -1) cout << 0;
                    else cout << numbmer.at(i+1);
                }
                cout << endl;
            } else {
                for (int i=0; i<n; i++) {
                    if (numbmer.at(i) == -1) cout << 0;
                    else cout << numbmer.at(i);
                }
                cout << endl;
            }
        }
    }
}