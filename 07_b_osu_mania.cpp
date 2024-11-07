#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int row;
        cin>>row;
        vector<int> v;
        
        for(int i = 0; i < row; i++) {
            string line;
            cin>>line;
            for(int j = 0; j < 4; j++) {
                if(line[j]=='#') {
                    v.push_back(j+1);
                    break;
                }
            }
        }
        for(int i = v.size() -1; i >=0; i--) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
