#include <bits/stdc++.h>
using namespace std;

vector<int> b(32, 0);

int f(int number) {
    int ind=0;
    while (number > 0) {
        if (number & 1) b.at(ind)++;
        number = number/2;
        ind++;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a.at(i);
        f(a.at(i));
    }

    int ansind=-1;

    for (int i=0; i<32; i++) {
        if (b.at(31-i) == 1) {
            ansind = 31-i;
            break;
        }
    }

    int topind;

    if (ansind != -1) {
        for (int i=0; i<n; i++) {
            int tmpn=a.at(i);
            for (int j=0; j<ansind; j++) tmpn = tmpn/2;
            if (tmpn & 1) {
                topind = i;
                break;
            }
        }
        cout << a.at(topind) << ' ';
        for (int i=0; i<n; i++) {
            if (i != topind) cout << a.at(i) << ' ';
        }
        cout << endl;
    } else {
        for (int i=0; i<n; i++) {
            cout << a.at(i) << ' ';
        }
        cout << endl;
    }
}