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
    int x = 5;
    int y = 10;

    if ((x & y) > 0) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}

