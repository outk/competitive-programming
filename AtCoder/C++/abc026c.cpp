#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> b(n-1);

    for (int i=0; i<n-1; i++) {
        cin >> b.at(i);
    }

    vector<vector<int>> tree;
    
    for (int i=0; i<n; i++) {
        vector<int> t;
        for (int j=0; j<n-1; j++) {
            if (b.at(j) == i+1) {
                t.push_back(j+1);
                // cout << j+1 << ' ';
            }
        }
        tree.push_back(t);
        // cout << endl;
    }

    vector<int> salaries(n, 0);

    for (int i=0; i<n; i++) {
        if (tree.at(i).size() == 0) salaries.at(i) = 1;
        // cout << i << ' ' << salaries.at(i) << endl;
    }

    deque<int> s;

    for (int i=0; i<tree.at(0).size(); i++) {
        s.push_back(tree.at(0).at(i));
        // cout << tree.at(0).at(i) << endl;
        // cout << s.top() << endl;
    }

    int now;

    while (!s.empty()) {
        now = s.back();
        // cout << now << endl;
        // cout << 9 << salaries.at(9) << 8 << salaries.at(8) << endl;
        s.pop_back();
        bool fin = true;
        for (int i=0; i<tree.at(now).size(); i++) {
            if (salaries.at(tree.at(now).at(i)) == 0) {
                fin = false;
                s.push_back(tree.at(now).at(i));
            }
        }
        if (fin) {
            if (tree.at(now).size()) {
                int maxnow=0, minnow=1000000;
                for (int i=0; i<tree.at(now).size(); i++) {
                    if (maxnow < salaries.at(tree.at(now).at(i))) maxnow = salaries.at(tree.at(now).at(i));
                    if (minnow > salaries.at(tree.at(now).at(i))) minnow = salaries.at(tree.at(now).at(i));
                }
                salaries.at(now) = maxnow + minnow + 1;
                // cout << now << ' ' << salaries.at(now) << endl;
            } else {
                salaries.at(now) = 1;
            }
        } else {
            s.push_front(now);
        }
    }

    int max0=0, min0=1000000;
    for (int i=0; i<tree.at(0).size(); i++) {
        // cout << salaries.at(tree.at(0).at(i)) << endl;
        if (max0 < salaries.at(tree.at(0).at(i))) max0 = salaries.at(tree.at(0).at(i));
        if (min0 > salaries.at(tree.at(0).at(i))) min0 = salaries.at(tree.at(0).at(i));
    }
    cout << max0 + min0 + 1 << endl;;
}