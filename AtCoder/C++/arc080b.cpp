#include <bits/stdc++.h>
using namespace std;

int main() {
    int h=0, w=0, n=0;
    cin >> h >> w >> n;

    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a.at(i);
    }

    vector<int> c(h*w);

    int i=0, ind=0;

    while (i < n) {
        for (int j=0; j<a.at(i); j++) {
            c.at(ind) = i+1;
            ind++;
        }
        i++;
    }

    int t=0;

    while (t < h) {
        if (t%2 == 0) {
            for (int j=0; j<w; j++) {
                cout << c.at(j+t*w) << ' ';
            }
        } else {
            for (int j=w-1; j>=0; j--) {
                cout << c.at(j+t*w) << ' ';
            }
        }
        cout << endl;
        t++;
    }

}