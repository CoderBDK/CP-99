#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    
       string s;
        cin>>s;
        int a = 0;
        int d = 0;
        for(char c:s) {
            if(c == 'A') {
                a++;
            }else {
                d++;
            }
        }
        
        if(a > d){
             cout << "Anton"<<endl;
        }else if(a < d) {
            cout << "Danik"<<endl;
        } else {
            cout << "Friendship"<<endl;
        }
    
    return 0;
}
