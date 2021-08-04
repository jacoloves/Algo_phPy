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
    bitset<4> S;
    S.set(3, 1);
    cout << S << endl;

    if (S.test(3)) {
        cout << "4th bit is 1" << endl;
    } else {
        cout << "4th bit is 0" << endl;
    }
}

