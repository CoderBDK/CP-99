#include <iostream>
#include<algorithm>
using namespace std;
int main() {
  
  int t;
  cin>>t;
  while(t--) {
      int a[2];
      cin>>a[0]>>a[1];
      sort(a, a + 2);
      cout<<a[0]<<' '<<a[1]<<endl;
  }
    return 0;
}
