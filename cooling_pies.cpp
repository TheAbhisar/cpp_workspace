#include<bits/stdc++.h>
using namespace std;
int main() {
int t,n;
cin>>t;
while(t--) {
    cin>>n;
vector<int> pie(n);
vector<int> rack(n);
for(int i=0; i<n; i++) {
    cin>>pie[i];
}
for(int i=0; i<n; i++) {
    cin>>rack[i];
}
sort(pie.begin(), pie.end());
sort(rack.begin(), rack.end());
int count=0, j=0,k=0;
for(int i=0; i<n; i++) {
    if( pie[j]<=rack[k]) {
        count++;
        j++;
        k++;
    }
    else {
    k++;
    }
}
cout<<count<<endl;
}
    return 0;
}