#include <iostream> // cout, endl, cin
#include <vector> 
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

  rep(i, N) {
    cout << a[i] << endl;
  }

}
