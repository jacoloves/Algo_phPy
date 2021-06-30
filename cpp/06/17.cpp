#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  string S;
  cin >> S;

  string ans;

  rep(i, S.size()) {
    if (S.at(i) == 'a' || S.at(i) == 'e' || S.at(i) == 'i' ||
        S.at(i) == 'o' || S.at(i) == 'u') {
      ans = "vowel";
    } else {
      ans = "consonant";
    }
  }

  cout << ans << endl; 
}
