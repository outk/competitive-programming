#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,w;
    cin >> h >> w;

    vector<vector<char>> s(h, vector<char>(w));
    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            cin >> s.at(i).at(j);
        }
    }

    int ans=0;

    vector<pair<int,int>> vec = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};

    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            if (s.at(i).at(j) == '.') {
                vector<vector<int>> c(h, vector<int>(w, -1));
                queue<pair<int, int>> q;
                auto now = make_pair(i, j);
                q.push(now);
                c.at(i).at(j) = 0;
                while (!q.empty()) {
                    now = q.front();
                    q.pop();
                    for (auto v:vec) {
                        if (now.first + v.first >= 0 && now.first + v.first < h && now.second + v.second >= 0 && now.second + v.second < w) {
                            if (s.at(now.first + v.first).at(now.second + v.second) == '.') {
                                if (c.at(now.first + v.first).at(now.second + v.second) == -1) {
                                    c.at(now.first + v.first).at(now.second + v.second) = c.at(now.first).at(now.second) + 1;
                                    auto nxt = make_pair(now.first + v.first, now.second + v.second);
                                    q.push(nxt);
                                    if (c.at(now.first).at(now.second) + 1 > ans) ans = c.at(now.first).at(now.second) + 1;
                                }
                            }
                        }
                    }
                }
            }
        }    
    }

    cout << ans << endl;
}