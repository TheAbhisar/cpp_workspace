#include<bits/stdc++.h>
using namespace std;
int main() {
int n,m,sum=0;
int t;
cin>>t;
while(t--) {
cin>>n>>m;
string result="No";
int arr[n];
for(int i=0; i<n; i++) {
    cin>>arr[i];
}
int total= 1 << n;
for(int k=1; k<total; k++) {
for(int i=0; i<n; i++) {
    if(k& (1<<i)) {
    // cout<<arr[i]<<" ";
    sum+=arr[i];
    }
    if(sum==m) {
        result="Yes";
    }
}
    // cout<<sum;
// if(sum==m){
    // result="Yes";
// }
// cout<<endl;
sum=0;
}
cout<<result<<endl;
}
    return 0;
}