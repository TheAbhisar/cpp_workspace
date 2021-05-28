#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--) {
    float mi,ma,b,ls,minrs,maxrs;
    cin>>b>>ls;
    mi= ls*ls - b*b;
    ma= ls*ls + b*b;
    minrs= sqrt(mi);
    maxrs= sqrt(ma);
    cout<<fixed<<setprecision(2)<<minrs<<" ";
    cout<<fixed<<setprecision(2)<<maxrs<<endl;
}
    return 0;
}