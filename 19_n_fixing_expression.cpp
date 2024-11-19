#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        char firstDigit = s[0];
        char lastDigit = s[2];
        char op = s[1];

        if(op == '=' && firstDigit == lastDigit) {
            cout << s << endl;
        }else if(op == '<' && firstDigit < lastDigit) {
            cout << s << endl;
        }else if(op == '>' && firstDigit > lastDigit) {
            cout << s << endl;
        }else {
            if(op == '=') {
                if(firstDigit < lastDigit) {
                    cout << firstDigit <<"<"<<lastDigit<<endl;
                } else {
                    cout << firstDigit <<">"<<lastDigit<<endl;
                }

            }else if(op == '<') {
                if(firstDigit == lastDigit) {
                    cout << firstDigit <<"="<<lastDigit<<endl;
                } else {
                    cout << firstDigit <<">"<<lastDigit<<endl;
                }
            }else if(op == '>') {
                if(firstDigit == lastDigit) {
                    cout << firstDigit <<"="<<lastDigit<<endl;
                } else {
                    cout << firstDigit <<"<"<<lastDigit<<endl;
                }
            }
        }
    }
    return 0;
}
