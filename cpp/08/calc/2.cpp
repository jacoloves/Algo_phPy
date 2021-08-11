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
    int N;
    cin >> N;

    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            sum += i * j;
        }
    }

    for (int i = 0; i < N; i++) {
        sum += i;
    }

    for (int i = 0; i < N; i++) {
        sum *= i;
    }
    
    cout << sum << endl;
}

