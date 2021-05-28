#include<bits/stdc++.h>
using namespace std;
int main() {
long long t;
cin>>t;
while(t--) {
    long long n;
    cin>>n;
    vector<long long int> speed(n);
    for(long long int i=0; i<n; i++) {
        cin>>speed[i];
    }
    long long count=1;
    for(long long int i= 1; i<n; i++) {
     if(speed[i]<=speed[i-1])
     count++;
     else 
         speed[i] = speed[i-1];
     }
cout<<count<<endl;
    }
    return 0;
}