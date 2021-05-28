#include<bits/stdc++.h>
using namespace std;
int main() {
int n,m,sum=0;
cin>>n>>m;
string result;
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
}
    // cout<<sum;
if(sum==m){
    result="Yes";
    break;
}
else
result="No";
cout<<endl;
sum=0;
}
cout<<result;
    return 0;
}