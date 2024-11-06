#include <iostream>

using namespace std;
const int NOT_FOUND = -1;
const char arr [2] = {'a','b'};

int main() {

    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int l = NOT_FOUND;
        int size = s.size();
        for(int i = 0; i < size - 1; i++) {
            if(s[i] == s[i + 1]) {
                l = i + 1;
                break;
            }
        }
        if(l == NOT_FOUND) {
            if(s[0] == arr[0]) {
                cout<<arr[1]<<s<<endl;
            } else {
                cout<<arr[0]<<s<<endl;
            }
        } else {
             if(s[l] == arr[0]) {
                cout<< s.substr(0,l) << arr[1] << s.substr(l,size)<<endl;
            } else {
                cout<< s.substr(0,l) << arr[0] << s.substr(l,size)<<endl;
            }
        }
    }

    return 0;
}
