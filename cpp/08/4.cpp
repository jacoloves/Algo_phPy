#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <bitset>
using namespace std;
typedef long long ll;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
    string S;
    cin >> S;

    int N = S.size();
    ll res = 0;

    for (int bit = 0;  bit < (1<<(N-1)); ++bit) {
        ll tmp = 0;
        for (int i = 0; i < N-1; ++i) {
            tmp *= 10;
            tmp += S[i] - '0';
            if (bit & (1<i)) res += tmp, tmp = 0;
        }
        tmp *= 10;
        tmp += S.back() - '0';
        res += tmp;
    }
    cout << res << emdl;
}

