#include<bits/stdc++.h>
using namespace std;
int main() {
int t,g;
cin>>t;
while(t--) {
    cin>>g;
    while(g--) {
int i,n,q;
cin>>i>>n>>q;
if(n%2==0)
cout<<n/2<<endl;
else {
    if(i==1) {
        if(q==1) {
            cout<<n/2<<endl;
        }
        else {
            cout<<(n/2) + 1<<endl;
        }
    }
    else if( i==2) {
        if(q==1) {
            cout<<(n/2) + 1<<endl;
        }
        else {
            cout<<n/2<<endl;
        }
    }
}
    }
}
    return 0;
}