#include <iostream> // cout, endl, cin
#include <vector> 
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int N;
  int target_num = 0;
  cin >> N;

  int ans = N;
  
  while(1) {
    if (N / 10 != 0) {
      target_num += N%10;
      N /= 10;
    } else if (target_num == 0) {
      target_num = 1;
      break;
    } else {
      break;
    }
  }

  if (ans%target_num == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}
