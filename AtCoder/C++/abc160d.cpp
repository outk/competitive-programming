#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<vector<int>> tree(n);
    for (int i=1; i<n-1; i++) {
        tree.at(i).push_back(i+1);
        tree.at(i).push_back(i-1);
    }
    tree.at(0).push_back(1);
    tree.at(n-1).push_back(n-2);
    tree.at(x-1).push_back(y-1);
    tree.at(y-1).push_back(x-1);

    vector<int> ans(n-1, 0);

    for (int i=0; i<n; i++) {
        vector<int> c(n, -1);
        c.at(i) = 0;
        queue<int> q;
        q.push(i);
        while (!q.empty()) {
            int now = q.front();
            q.pop();
            for (int h=0; h<tree.at(now).size(); h++) {
                if (c.at(tree.at(now).at(h)) == -1) {
                    c.at(tree.at(now).at(h)) = c.at(now) + 1;
                    q.push(tree.at(now).at(h));
                    ans.at(c.at(now))++;
                }
            }
        }
    }

    for (int i=0; i<n-1; i++) {
        cout << ans.at(i) / 2 << endl;
    }
}