#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--) {
    int gcd,a,b,lcm;
    cin>>a>>b;
    lcm = (a*b) / __gcd(a,b);
    cout<<__gcd(a,b)<<" "<<lcm<<endl;
}
    return 0;
}