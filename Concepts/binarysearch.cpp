#include<iostream>
#define rep(i,n) for(int i=0; i<(int)(n); i++)

using namespace std;

int binarySearch(int a[], int n, int key) {

    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    while(s<e) {

        if(a[mid]==key) {
            return mid;
        } else if(key>a[mid]) {
            s=mid+1;
        } else if(a[mid]>key) {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int main() {

    int n;
    cin>>n;
    int a[n];
    rep(i,n) {
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(a,n,key);
    
}