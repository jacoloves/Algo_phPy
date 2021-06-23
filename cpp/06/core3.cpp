#include <iostream> // cout, endl, cin
#include <vector> 
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int N, K;
  int sinage = 1;

  cin >> N;
  cin >> K;

  rep(i, N) {
    if (sinage*2 <= sinage+K) {
      sinage *= 2;
    } else {
      sinage += 4
    }
  }

}
