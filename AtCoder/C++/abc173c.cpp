#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll h, w, k, bc = 0, ans = 0;
    cin >> h >> w >> k;

    vector<vector<string>> c(h, vector<string>());

    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            cin >> c.at(i).at(j);
            if (c.at(i).at(j) == "#") {
                bc++;
            }
        }
    }

    for (   )


}