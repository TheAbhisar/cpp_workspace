#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--) {
long long n,k;
cin>>n>>k;
long long max=0;
long long r=0;
for(int i=1; i<=k; i++) {
r=n%i;
if(r>max) 
max=r; 
}
cout<<max<<endl;
}
    return 0;
}