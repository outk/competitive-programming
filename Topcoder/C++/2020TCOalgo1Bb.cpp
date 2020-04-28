#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class EllysWhatDidYouGet
{
    public:
         int getCount(int N) {
            int ans=0;
            vector<vector<int>> ansv(N, vector<int>(50, 0));
            for (int x=1; x<=50; x++) {
                for (int y=1; y<=50; y++) {
                    for (int z=1; z<=50; z++) {
                        for (int i=1; i<=N; i++) {
                            int t = i * x;
                            t += y;
                            t *= z;
                            int tmp=0;
                            while (t) {
                                tmp += t - (t/10)*10;
                                t /= 10;
                            }
                            ansv.at(i).at(tmp-1)++;
                        }
                    }
                }
            }
            for (int i=0; i<50; i++) {
                bool failed = false;
                int tmpans = 0;
                for (int j=0; j<N; j++) {
                    if (ansv.at(j).at(i)) {
                        tmpans += ansv.at(j).at(i);
                    } else {
                        failed = true;
                        break;
                    }
                }
                if (!failed) {
                    ans += tmpans;
                }
            }
            return ans;
        }
};