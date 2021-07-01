#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int a, b;
  char C;
  cin >> a >> C >> b;

  int ans;

  if (C == '+') {
    ans = a+b;
  } else {
    ans = a-b;
  }

  cout << ans << endl; 
}
