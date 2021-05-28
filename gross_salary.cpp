#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--) {
    int salary;
    float gross=0.0;
    cin>>salary;
    if(salary<1500) {
gross = salary + (0.1*salary) + (0.9*salary);
    }
    else if( salary >= 1500) {
        gross = salary + 500 + (0.98*salary);
    }
cout<<fixed<<setprecision(2)<<gross<<endl;

}
return 0;
}