#include <iostream> // cout, endl, cin
#include <vector>
#include <string>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int N,A;
  cin >> N;
  cin >> A;
  
  
  char a[N];
  int b[N];
  char c;

  rep(i, N) {
    cin >> c >> b[i];
    a[i] = c;
  }

  rep(i, N) {
    if (a[i] == '+') {
      A += b[i];
      cout << i+1 << ":";
      cout << A << endl;
    } else if (a[i] == '-') {
      A -= b[i];
      cout << i+1 << ":";
      cout << A << endl;
    } else if (a[i] == '*') {
      A *= b[i];
      cout << i+1 << ":";
      cout << A << endl;
    } else if (a[i] == '/') {
      if (b[i] == 0) {
        cout << "error" << endl;
        break;
      } else {
        A /= b[i];
        cout << i+1 << ":";
        cout << A << endl;
      }
    }
  }
}
