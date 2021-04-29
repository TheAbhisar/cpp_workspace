#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>> t;
    while(t--) 
    {
        int n,h;
        cin>>n;
        int arr[n];
    for(int i=0; i < n; i++) {
        cin>>h;
        arr[i] = h;
    }
sort(arr, arr + n);
int min_pair = arr[0] + arr[1];
cout<<min_pair<<endl;
min_pair=0;
    }
    return 0;
}