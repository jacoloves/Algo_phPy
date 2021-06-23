#include <iostream> // cout, endl, cin
#include <vector>
#include <string>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int N;
  cin >> N;
  
  char a[N];
  char c;

  int g_flg = 0;
  int w_flg = 0;
  int y_flg = 0;
  int p_flg = 0;
  int cnt = 0;

  rep(i, N) {
    cin >> c;
    a[i] = c;
  }

  rep(i, N) {
    if (a[i] == 'G') {
      if (g_flg == 0) {
        g_flg = 1;
        cnt++;
      }
    } else if (a[i] == 'W') {
      if (w_flg == 0) {
        w_flg = 1;
        cnt++;
      }
    } else if (a[i] == 'Y') {
      if (y_flg == 0) {
        y_flg = 1;
        cnt++;
      }
    } else if (a[i] == 'P') {
      if (p_flg == 0) {
        p_flg = 1;
        cnt++;
      }
    }
  }

  if (cnt == 3) {
    cout << "Three" << endl;
  } else if (cnt == 4) {
    cout << "Four" << endl;
  }
}
