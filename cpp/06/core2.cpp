#include <iostream> // cout, endl, cin
#include <vector> 
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int N;
  int target_num = 0;
  cin >> N;

  int ans = N;
  
  while(N) {
    target_num += N%10;
    N /= 10;
  }

  if (ans%target_num == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}
