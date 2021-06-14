#include <iostream> // cout, endl, cin
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int N, A;
  cin >> N;
  cin >> A;
 
  cout << "A:";
  rep(i, A) {
    cout << "]";
  }
  cout << endl;
 
  cout << "B:";
  rep(i, B) {
    cout << "]";
  }
  cout << endl;
}
