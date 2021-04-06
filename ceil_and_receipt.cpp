#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int k=0,p;
        cin>>p;
        int price[12]={1,2,4,8,16,32,64,128,256,512,1024,2048};
        while(p!=0){
            for(int i=11;i>=0;i--){
                if(p>=price[i]){
                    p-=price[i];
                    k++;
                    break;
                }
            }
        }
        cout<<k<<endl;
    }
    return 0;
}