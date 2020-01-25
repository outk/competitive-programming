#include <bits/stdc++.h>
using namespace std;


class BinaryHeapLeaf
{
    public:
        vector <int> maxDiff(int N) {
            vector<int> ansv;
            int ansmin=(N+1)/2;
            ansv.push_back(ansmin);
            int i=0, n=N, s=1;
            while (n) {
                n /= 2;
                if (n) {
                    i++;
                }
                s *= 2;
            }
            if (N-s <= -2) ansv.push_back(N-i+1);
            else ansv.push_back(N-i);
            return ansv;
        }
};
