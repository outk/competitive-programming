#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h, l, r;
    cin >> n >> h >> l >> r;

    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a.at(i);
    }

    vector<vector<int>> dp(n+1, vector<int>(h, -1));
    dp.at(0).at(0) = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<h; j++) {
            if (dp.at(i).at(j) != -1) {
                if (dp.at(i+1).at((j+a.at(i))%h) <= r && dp.at(i+1).at((j+a.at(i))%h) >= l) dp.at(i+1).at((j+a.at(i))%h) = dp.at(i).at(j) + 1;
                else dp.at(i+1).at((j+a.at(i))%h) = dp.at(i).at(j);
                if (dp.at(i+1).at((j+a.at(i)-1)%h) <= r && dp.at(i+1).at((j+a.at(i)-1)%h) >= l) dp.at(i+1).at((j+a.at(i)-1)%h) = dp.at(i).at(j) + 1;
                else dp.at(i+1).at((j+a.at(i)+-1)%h) = dp.at(i).at(j);
            }
        }

    }

    int ans = 0;

    for (int i=0; i<h; i++) {
        if (ans < dp.at(n).at(i)) ans = dp.at(n).at(i);
    }

    cout << ans << endl;
}