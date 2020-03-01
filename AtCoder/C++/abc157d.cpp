#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>> friends(n);

    for (int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        friends.at(a-1).insert(friends.at(a-1).begin(), b-1);
        friends.at(b-1).insert(friends.at(a-1).begin(), a-1);
    }

    vector<vector<int>> blocks(n, vector<int>(0));

    for (int i=0; i<n; i++) {
        int c, d;
        cin >> c >> d;
        blocks.at(c-1).insert(blocks.at(c-1).begin(), d-1);
        blocks.at(d-1).insert(blocks.at(d-1).begin(), c-1);
    }

    


}