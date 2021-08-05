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
    for (int tmp = 0; tmp < (1 << 3); tmp++) {
        bitset<3> s(tmp);
        cout << s << endl;
    }
}

