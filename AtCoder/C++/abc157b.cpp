#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> a(3, vector<int>(3));
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin >> a.at(i).at(j);
        }
    }

    int n;
    cin >> n;

    vector<int> b(n);
    for (int i=0; i<n; i++) {
        cin >> b.at(i);
    }

    string ans = "No";

    vector<vector<int>> c(3, vector<int>(3, 0));

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            for (int p=0; p<n; p++) {
                if (a.at(i).at(j) == b.at(p)) {
                    c.at(i).at(j) = 1;
                    break;
                }
            }
        }
    }

    for (int i=0; i<3; i++) {
        if (c.at(i).at(0)) {
            for (int j=1; j<3; j++) {
                if (c.at(i).at(j) == 0) break;
                if (j == 2) ans = "Yes";
            }
        }
    }

    for (int i=0; i<3; i++) {
        if (c.at(0).at(i)) {
            for (int j=1; j<3; j++) {
                if (c.at(j).at(i) == 0) break;
                if (j == 2) ans = "Yes";
            }
        }
    }

    if (c.at(0).at(0)) {
        if (c.at(1).at(1)) {
            if (c.at(2).at(2)) ans = "Yes";
        }
    }
    if (c.at(2).at(0)) {
        if (c.at(1).at(1)) {
            if (c.at(0).at(2)) ans = "Yes";
        }
    }

    cout << ans << endl;
}