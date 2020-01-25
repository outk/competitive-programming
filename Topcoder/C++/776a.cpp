#include <bits/stdc++.h>
using namespace std;

class CheatingAfterTests
{
    public:
         int cheat(vector<int> report) {
            int ans=0, tmpmax = 0;
            sort(report.begin(), report.end());
            for (int i=0; i<report.size(); i++) {
                int r10=0, r1=0;
                r1 = report.at(i) - (report.at(i)/10)*10;
                r10 = report.at(i) - r1;
                int n90=90-r10, n9=9-r1;
                if (tmpmax < n90 && n90 != 90) tmpmax = n90;
                if (tmpmax < n9) tmpmax = n9;
            }

            for (int i=0; i<report.size(); i++) {
                ans += report.at(i);
            }
            ans += tmpmax;
            return  ans;
        }
};
