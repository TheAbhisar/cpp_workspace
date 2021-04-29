#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--) {
    int b,sum=0;
    cin>>b;
if(b<4) {
    cout<<'0'<<endl;
}
    else if(b>=4) {
        b= b/2;
        for(int i=b-1; i>=1; i--) {
sum=sum+i;
        }
        cout<<sum<<endl;
    }
}
    return 0;
}