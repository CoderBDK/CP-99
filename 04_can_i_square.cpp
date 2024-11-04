#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--) {
       int n;
       cin>>n;
       long long int total = 0;
       for(int i = 0; i < n; i++) {
           long long int v;
           cin>>v;
           total += v;
       }
       long long int r = sqrt(total);
       if(r * r == total) cout << "YES" << endl;
       else cout << "NO" << endl;
   }
    return 0;
}
