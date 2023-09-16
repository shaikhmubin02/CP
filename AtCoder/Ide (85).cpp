// Longest palindrome

#include<bits/stdc++.h>
#include<cstring>
//#include <string.h>
#define ll long long
using namespace std;

int main() {
    
    string s;
    cin>>s;
    int n = s.size();
    int ans=0;
    for(int i=0; i<n; i++) {
        
        for(int j=i; j<n; j++) {
            string p,q;
            p = s.substr(i,j-i+1);
            q = p;
            reverse(p.begin(),p.end());
            if(p==q) {
                int c = p.size();
                ans=max(ans,c);
            }
            //cout<<p<<"\n";
        }
    }
    cout<<ans;
}