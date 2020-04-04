#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void f(int &count, const int maxcount, int rank, int &mrank, vector<int> &ans) {
    if (count != maxcount) {
        if (rank == 10) {
            if (rank == mrank) {
                while (count != maxcount && ans.at(rank) < 9) {
                    ans.at(rank)++;
                    count++;
                }
                if (count == maxcount) return;
                else {
                    ans.at(rank) = 0;
                    count++;
                    mrank--;
                }
            } else {
                while (count != maxcount && ans.at(rank) < 9 && ans.at(rank)-ans.at(rank-1) < 1) {
                    ans.at(rank)++;
                    count++;
                }
                if (count == maxcount) return;
                else if (ans.at(rank) == 9) {
                    ans.at(rank) = 0;
                    count++;
                } else {
                    ans.at(rank) = ans.at(rank-1);
                    count++;
                }
            }
        } else {
            if (rank == mrank) {
                while (count != maxcount && ans.at(rank) < 9) {
                    f(count, maxcount, rank+1, mrank, ans);
                    ans.at(rank)++;
                }
                if (count == maxcount) return;
                else {
                    ans.at(rank) = 0;
                    count++;
                    mrank--;
                }
            } else {
                while (count != maxcount && ans.at(rank) <= 9 && ans.at(rank) - ans.at(rank-1) < 1) {
                    f(count, maxcount, rank+1, mrank, ans);
                    ans.at(rank)++;
                }
                if (count == maxcount) return;
                else if (ans.at(rank) == 9) {
                    ans.at(rank) = 0;
                    count++;
                } else {
                    ans.at(rank) = ans.at(rank-1);
                    count++;
                    f(count, maxcount, rank+1, mrank, ans);
                }
            }
        }
    }
}

int main() {
    ll k;
    cin >> k;

    vector<int> ans(11, 0);

    int c = 0, mrank = 10;
    f(c, k, 1, mrank, ans);
    for (int i=0; i<11; i++) {
        if (i >= mrank) {
            cout << ans.at(i);
        }
    }
    cout << endl;


}