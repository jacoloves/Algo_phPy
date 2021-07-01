#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
#include <cstring>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  string str1, str2;
  cin >> str1;
  cin >> str2;

  if (str1 >= str2) {
    cout << str1 << endl;
  } else {
    cout << str2 << endl;
  }

}
