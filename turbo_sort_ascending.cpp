#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    int arr[t];
        for (int i = 0; i < t; i++)
        {
            int n;
            cin>>n;
            arr[i]=n;
        }
        sort(arr, arr+t);
        for(int i=0; i<t; i++) {
            cout<<arr[i]<<endl;
        }     
 return 0;   
}