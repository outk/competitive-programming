#include<bits/stdc++.h>
using namespace std;

void foreach_permutation(int n, function<void(int *)> f) {
    int ptns[n];
    for (int i = 0; i < n; i++) ptns[i] = i;
    do {
        f(ptns);
    } while (next_permutation(ptns, ptns + n));
}

int main() {
    int n=0;
    cin >> n;

    vector<int> p(n);
    vector<int> q(n);

    for (int i=0; i<n; i++) {
        cin >> p.at(i);
    }
    for (int i=0; i<n; i++) {
        cin >> q.at(i);
    }

    foreach_permutation(3, [](int *ptns));

}