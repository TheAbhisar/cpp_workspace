#include <iostream>
using namespace std;
int main() 
{
 int t;
 cin>>t;
 while(t--)
 {   
     long long n;
     cin>>n;
     long long fact=1;
     for(int i=1;i<=n;i++)
     {
     fact= fact*i;
     }
     cout<<fact<<endl;
 }
    return 0;
}