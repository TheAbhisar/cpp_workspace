#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--) {
int arr[30] = {0};
for(int i=2; i<30; i++) {
for(int j= i*i; j<30; j+=i) {
    arr[j-1] =1;
}
}
for(int i=1; i<30; i++) {
    if(arr[i-1]==0)
    cout<<i<<endl;
}
}
    return 0;
}