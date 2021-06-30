#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  string A, B, C;
  cin >> A >> B >> C;

  string ans;

  ans += A[0];
  ans += B[0];
  ans += C[0];

  cout << ans << endl; 
}
