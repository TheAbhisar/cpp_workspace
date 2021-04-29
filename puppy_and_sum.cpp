#include<bits/stdc++.h>
using namespace std;
int sum (int d, int n) {
    while(d--) {
int sum = n;
while(sum--) {
n+=sum;
}
}
return n;
}
int main() {
int t;
cin>>t;
while(t--) {
    int d,n;
    cin>>d>>n;
    cout<<sum(d,n)<<endl;
}
    return 0;
}