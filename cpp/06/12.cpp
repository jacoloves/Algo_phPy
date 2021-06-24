#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int N, K, l;

  cin >> N;
  cin >> K;

  int a[N];
  rep(i, N){
    cin >> l;
    a[i] = l;
  }

  int cnt = 0;

  rep(i, N) {
    if(abs(0-a[i]) <= abs(K-a[i])) {
      cnt += 2 * abs(0-a[i]);
    } else {
      cnt += 2 * abs(K-a[i]);
    }
  }

  cout << cnt << endl;

}
