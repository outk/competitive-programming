#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int z=0; z<t; z++) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int start=-1, end=200000;

        map<pair<int, int>, int> m;
        auto now = make_pair(n, n);
        m.insert({now, 0});
        for (int i=0; i<n; i++) {
            if (s.at(i) == 'L') now.second--;
            if (s.at(i) == 'R') now.second++;
            if (s.at(i) == 'U') now.first--;
            if (s.at(i) == 'D') now.first++;
            
            if (m.find(now) == m.end()) m.insert({now, i+1});
            else {
                if (end-start > i-m.at(now)) {
                    end = i+1;
                    start = m.at(now)+1;
                }

                m.at(now) = i+1;
            }
        }

        if (end-start < 200000) cout << start << ' ' << end << endl;
        else cout << -1 << endl;
    }
}