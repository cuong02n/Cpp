/*
    author : cuong2905say
    created : 22-09-2022  15:05:01  UTC: +7
*/
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 0;  // test case ;
    cin >> t;
    while (t--) {
        int n = 0, last = 0, res = 0, x = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x != 0 && last == 0) {
                res++;
            }
            last = x;
        }

        cout << min(res, 2) << endl;
    }
    system("pause");
    return 0;
}
