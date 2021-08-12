#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <iomanip>
using namespace std;
typedef long long ll;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int N;
    cin >> N;
    vector<ll> data(N+1);

    data.at(0) = 2;
    data.at(1) = 1;

    for(int i = 2; i <= N; ++i) {
        data.at(i) = data.at(i-2) + data.at(i-1);
    }

    cout << data.at(N) << endl;
}

