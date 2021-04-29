#include<bits/stdc++.h>
using namespace std;
int main() {
    long t,quantity,price;
    double total;
    cin>>t;
    while(t--) {
        cin>>quantity>>price;
        if(quantity >1000) {
            total = quantity*price-0.1*quantity*price;
        }
        else {
            total= quantity * price;
        }
cout << fixed << setprecision(6) << total <<endl;        
    }
    return 0;
}