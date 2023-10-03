// Allen has a LOT of money. He has n
// dollars in the bank. For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills are 1, 5, 10, 20, 100.
// What is the minimum number of bills Allen could receive after withdrawing his entire balance?

// Input
// The first and only line of input contains a single integer n (1≤n≤109).

// Output
// Output the minimum number of bills that Allen could receive.

#include<bits/stdc++.h>
#include<vector>
#include<string>
#define ll long long

using namespace std;

void Go() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

void solve() {
    
    int n;
    cin>>n;
    //cout<< n/100<<" "<<(n%100)/20<<" "<<(n%20)/10<<" "<<(n%10)/5<<" "<<n%5<<"\n";
	cout << n/100+(n%100)/20+(n%20)/10+(n%10)/5+n%5;
    
}

int main() {
    
    Go();
    int t;
    t=1;
    while(t--) {
        solve();
    }
    
}