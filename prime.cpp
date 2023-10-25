#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	for(int i=2;i<=sqrt(n);i++){//upto sqrt(n) optimal ,upto n brute force
		if(n%i==0){
			cout<<"false";
			exit(0);
		}
		
	}
	cout<<"true";
}
