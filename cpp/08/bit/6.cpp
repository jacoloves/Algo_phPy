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
    uint32_t x = 0b100;
    cout << x << endl;

    cout << (x | 0b010) << endl;
}

