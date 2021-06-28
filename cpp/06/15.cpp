#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  string S;
  cin >> S;

  int ans = 1;

  rep(i, S.size()) {
    if (S.at(i) != '1') {
      if (S.at(i) == '+')
        ans++;
      else
        ans--;
    }
  }

  cout << ans << endl; 
}
