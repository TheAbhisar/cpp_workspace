#include<bits/stdc++.h>
using namespace std;
int main() {
long long t,x,y,k;
long long n;
cin>>t;
while(t--) {
cin>>x>>y>>k>>n;
int p,c,luck=0;
for(int i=0; i<n; i++) {
    cin>>p>>c;
    if( p >= (x-y) && c<=k) {
        luck=1;
    }
}
if(luck==1)
cout<<"LuckyChef"<<endl;
else
cout<<"UnluckyChef"<<endl;

}
    return 0;
}