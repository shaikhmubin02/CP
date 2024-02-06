#include<bits/stdc++.h>
#include <vector>
using namespace std;


void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
  
    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
  
    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}


int main() {

    int n;
    cin>>n;
    // // how to count divisior of number

    // // time complexity = O(n);
    // int cnt=0;
    // for(int i=1; i<=n; i++) {
    //     if(n%i==0) {
    //         cnt++;
    //     }
    // }
    // cout<<cnt<<"\n";

    // //time complexity = O(n sqrt(n))
    // int cntt=0;
    // for(int i=1; i*i<=n; i++) {
    //     if(n%i==0) {
    //         cntt++; // i is factor
    //         cout<<cntt<<"\n";
    //         if(i!=n/i) {
    //             cntt++; // (n/i) is also factor
    //             cout<<cntt<<"\n";
    //         }
    //     }
    // }
    // cout<<cntt;

    //time complexity = O(n log(n))
    // vector<int> div(n+1);
    // for(int i=1; i<=n; i++) {
    //     for(int j=i; j<=n; j+=i) {

    //         div[j]++; // i is divisior of j

    //     }
    // }
    // for(int i=1; i<=n; i++) {
    //     cout<<div[i]<<"\n";
    // }


    //sieve of Eratosthenes
    // tc = O(n log(log(n)))
    SieveOfEratosthenes(n);

    
}