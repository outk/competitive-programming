#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    for (int qq=0; qq<q; qq++) {
        int n,m;
        cin >> n >> m;
        
        vector<vector<int>> p(n);

        for (int i=0; i<n; i++) {
            cin >> p.at(i).at(0) >> p.at(i).at(1).first >> p.at(i).at(1).second;
        }

        sort(p.begin(), p.end());

        for (int i=0; i<n; i++) {
            cout << p.at(i).at(0) << ' ' << p.at(i).at(1).first << ' ' << p.at(i).at(1).second << endl;
        }
    }
}