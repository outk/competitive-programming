#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n), b(m);
    vector<vector<int>> c(n, vector<int>(m,0));
    for (int i=0; i<n; i++) {
        cin >> a.at(i);
    }
    for (int i=0; i<m; i++) {
        cin >> b.at(i);
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            c.at(i).at(j) = a.at(i) * b.at(j);
        }
    }

    int ans=0, check=1, hc=0;

    if (k <= n) {
        if (k <= m) {
            for (int y=1; y<k+1; y++) {
                hc = 0;
                for (int i=0; i<m-(k-y+1)+1; i++) {
                    check = 1;
                    for (int j=0; j<k-y+1; j++) {
                        check = check * b.at(i+j);
                    }
                    if (check) hc++;
                }
                for (int t=0; t<n-y+1; t++) {
                    check = 1;
                    for (int p=0; p<y; p++) {
                        check = check * a.at(t+p);
                    }
                    if (check) ans += hc;
                }
            }
        } else {
            for (int y=1; y<m+1; y++) {
                hc = 0;
                for (int i=0; i<m-(k-y+1)+1; i++) {
                    check = 1;
                    for (int j=0; j<k-y+1; j++) {
                        check = check * b.at(i+j);
                    }
                    if (check) hc++;
                }
                for (int t=0; t<n-y+1; t++) {
                    check = 1;
                    for (int p=0; p<y; p++) {
                        check = check * a.at(t+p);
                    }
                    if (check) ans += hc;
                }
            }
        }
    } else {
        if (k <= m) {
            for (int y=1+k-n; y<k+1; y++) {
                hc = 0;
                for (int i=0; i<m-(k-y+1)+1; i++) {
                    check = 1;
                    for (int j=0; j<k-y+1; j++) {
                        check = check * b.at(i+j);
                    }
                    if (check) hc++;
                }
                for (int t=0; t<n-y+1; t++) {
                    check = 1;
                    for (int p=0; p<y; p++) {
                        check = check * a.at(t+p);
                    }
                    if (check) ans += hc;
                }
            }
        } else {

        }
    }
    
    
}