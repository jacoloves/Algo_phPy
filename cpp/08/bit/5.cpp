#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <bitset>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    rep(i, N){
        cin >> A.at(i);
    }

    bool ans = false;

    for (int tmp = 0; tmp < (1 << 20); tmp++) {
        bitset<20> s(tmp);

        int sum = 0;
        for (int i = 0; i < N; i++) {
            if (s.test(i)) {
                sum += A.at(i);
            }
        }
        if (sum == K) {
            ans = true;
        }
    }

    if (ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

