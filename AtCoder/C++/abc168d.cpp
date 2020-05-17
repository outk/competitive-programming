#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, m;
    cin >> n >> m;

    string ans = "Yes";

    vector<vector<ll>> rooms(n, vector<ll>());
    for (int i=0; i<m; i++) {
        ll a, b;
        cin >> a >> b;
        a--;
        b--;
        rooms.at(a).push_back(b);
        rooms.at(b).push_back(a);
    }

    vector<ll> ansv(n, -1);

    queue<ll> q;
    q.push(0);

    ll now;
    while (!q.empty()) {
        now = q.front();
        q.pop();
        for (int i=0; i<rooms.at(now).size(); i++) {
            if (ansv.at(rooms.at(now).at(i)) == -1) {
                ansv.at(rooms.at(now).at(i)) = now;
                q.push(rooms.at(now).at(i));
            }
        }
    }

    cout << "Yes" << endl;

    for (int i=1; i<n; i++) {
        cout << ansv.at(i)+1 << endl;
    }

}