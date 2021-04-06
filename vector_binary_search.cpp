#include<bits/stdc++.h>
using namespace std;

int main() {
	vector <int> vect;
	int n;
	cin>>n;
	for(int i=0; i<n; i++) {
		int num;
		cin>> num;
		vect.push_back(num);
	
	}
	sort(vect.begin(), vect.end());
	
	cout<<"enter element to be searched";
	int element;
	cin>> element;
	int x = element;
	
	if (binary_search(vect.begin(), vect.end() , x))
	{
	    cout<<"element is found";
	}
	return 0;
}