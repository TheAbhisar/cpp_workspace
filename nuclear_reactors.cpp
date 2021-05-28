#include<bits/stdc++.h>
using namespace std;
int main() {
long long a,n,k;
cin>>a>>n>>k;
long *ptr;
ptr= (long*)malloc(k*sizeof(long));
for(int i=0; i<k; i++) {
    ptr[i]=0;
}
    while(a--) {
        for(int i=0; i<k;) {
            ptr[i]++;
            if(ptr[i]>n) {
                ptr[i]=0;
                i++;
            }
            else
            break;
        }
    }
    for(int i=0; i<k; i++) {
        cout<<ptr[i]<<" "<<endl;
    }
    return 0;
}