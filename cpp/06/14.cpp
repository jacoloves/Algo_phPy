#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int A, l;

  cin >> A;

  int a[A];

  int cnt = 0;
  int cnt_even = 0;

  rep(i, A) {
    cin >> l;
    a[i] = l;
  }

  while(1) {
    rep(i, A) {
      if (a[i] % 2 == 0)
        cnt_even++;
    }

    if (cnt_even == A) {
      rep(i, A) {
        a[i] /= 2;
      }
      cnt++;
    } else {
      break;
    }
    cnt_even = 0;
  }

  cout << cnt << endl;
}
