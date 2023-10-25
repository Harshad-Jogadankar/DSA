//Armstrong no is a no whose sum of each digits when each digits is raised to the power of nof of digits and added gives the same sum as the no.

#include<bits/stdc++.h>
bool checkArmstrong(int n){
	//Write your code here
	int rem=0,ori=n,sum=0;
	if(n>pow(2,31)-1 || n<pow(2,-31)) return false;
	int p=log10(n)+1;
	while(n){
		sum=pow(n%10,p)+sum;
		n=n/10;

	}
	if(sum==ori) return true;
	else return false;
}
