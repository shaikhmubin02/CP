#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main() {
    
    string s;
    cin>>s;
    int uppercase = 0;
    int lowercase = 0;
    for(int i=0; i<s.size(); i++) {
        if(s[i]>='A' && s[i]<='Z') {
            uppercase++;
        } else {
            lowercase++;
        }
    }
    if(lowercase>=uppercase) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s;
    } else {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s;;
    }
    
    return 0;
}