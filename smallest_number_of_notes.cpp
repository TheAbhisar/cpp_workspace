#include <iostream>
using namespace std;
int main() {
    
    int t;
    cin>>t;
    while(t--){
        long int n,sum=0;
        cin>>n;
            int a[]={100,50,10,5,2,1};
             while(n>0){
            for(int i=0;i<6;i++){
                int x;
                x=n/a[i];
                sum=sum + x;
                n=n-x*(a[i]);
            }
             
      cout<<sum<<endl;
    }
    return 0;
}