/*
    author : cuong2905say
    created : 27-12-2023  12:24:58  UTC: +7
*/
#include <bits/stdc++.h>
using namespace std;
/*
    author : cuong2905say
    created : 27-12-2023  12:49:44  UTC: +7
*/
#include <bits/stdc++.h>
#define all(A) (A).begin(), (A).end()
#define sc scan_single()

using namespace std;
using ll = long long;
using ull = unsigned long long;

template <class T1, class T2>
ostream& operator<<(ostream& os, pair<T1, T2> A) {
    os << "{ " << A.first << ", " << A.second << " }";
    return os;
}
template <class T1, class T2, class T3>
ostream& operator<<(ostream& os, tuple<T1, T2, T3> A) {
    os << "{ " << get<0>(A) << ", " << get<1>(A) << ", " << get<2>(A) << " }";
    return os;
}

template <class it>
void _print(it begin, it end) {
    for (it i = begin; i != end; i++) {
        cout << *i << " ";
    }
}

inline int scan_single() {
    int x;
    cin >> x;
    return x;
}

void _verbose() {
}

int MOD = 1e9 + 7;
int verbose = -1;
int all_cases = -1;
void precalc() {
}
void solve(bool v = false, int all_case = -1) {
    string s;
    cin >> s;
    int maxlen = 0, count = 0, dau = -1, cuoi = -1, l = s.length();
    for (int i = 0; i < l; i++) {
        if (s[i] == '(') dau = i;
    }
    for (int i = l - 1; i >= 0; i--) {
        if (s[i] == ')') cuoi = i;
    }
    if (dau>=cuoi) {
        cout << "0 1";
        return;
    }
    stack<int> st;
    st.push(-1);
    for (int i = dau; i <= cuoi; i++) {
        if (s[i] == '(')
            st.push(i);
        else if (!st.empty()) {
            st.pop();
            maxlen = max(maxlen, i - st.top());
        }
    }
    if (maxlen == 0) {
        cout << "0 1";
    } else
        cout << maxlen;
}

void reset() {
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    chrono::steady_clock::time_point start = chrono::steady_clock::now();

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    precalc();
    for (int i = 0; i < t; i++) {
#ifndef ONLINE_JUDGE
        cout << "case " << i + 1 << ": ";
#endif
        if (verbose == i + 1) {
            solve(true, t);
        } else {
            solve(false, t);
        }
        reset();
    }
    chrono::steady_clock::time_point end = chrono::steady_clock::now();
#ifndef ONLINE_JUDGE
    chrono::duration<double> time_span = chrono::duration_cast<std::chrono::duration<double>>(end - start);
    cout << "time use: " << time_span.count() << endl;
#endif

    return 0;
}
