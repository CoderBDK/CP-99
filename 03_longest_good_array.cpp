#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        long long int l,r;
        cin>>l>>r;
        long long diff = r - l;
        long long int lg = 0;
        if(diff < 0) {
            lg = 0;
        }else {
            lg = (-1 + sqrt(1 + 8*diff))/2;
            lg++;
        }
        cout<<lg<<endl;
    }

    return 0;
}
