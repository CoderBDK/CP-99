#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int ax[4];
        for(int i = 0; i < 4; i++) {
           int x,y;
           cin>>x>>y;
           ax[i] = x;
        }
        int minX = ax[0];
        int maxX = ax[0];
        for(int i = 0; i < 4; i++) {
            if(minX > ax[i]) minX = ax[i];
            if(maxX < ax[i]) maxX = ax[i];
        }
        int side = maxX - minX;
        cout << side * side << endl;
    }
    return 0;
}
