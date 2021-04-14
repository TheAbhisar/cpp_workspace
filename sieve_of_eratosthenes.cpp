#include<bits/stdc++.h>
using namespace std;
void sieve_of_eratosthenes(int n) {
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for(int i=2; i*i<=n; i++) {
if(prime[i] == true)
{
    for(int multiple = i*2; multiple<=n; multiple+= i) {
        prime[multiple] = false;
    }
}
    }
    //printing prime nos
    for(int i=2; i<=n; i++) {
        if(prime[i] ==true) {
            cout<<i<<" ";
        }
    }
}
int main() {
    int n;
    cout<<"enter number to find prime numbers before it";
    cin>>n;;
    sieve_of_eratosthenes(n);
    return 0;
}