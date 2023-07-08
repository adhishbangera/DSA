//Find element at a particular position in pascals triangle
#include <iostream>
using namespace std;

int main() {
  int n, r;
  cin >> n >> r;
  
//logic nCr
  long long res = 1;
  for (int i = 0; i < r; i++) {
    res = res * (n - i);
    res=res/(i+1);
  }
  cout<<res;
}
