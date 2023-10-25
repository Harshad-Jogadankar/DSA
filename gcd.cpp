#include<math.h>
#include<iostream>
#include<stdio.h>
using namespace std;

int gcd(int a,int b)
{
	//Write your code here
	int rem=0,quotient=0;
	// int divisor,dividend;
	if(pow(a,31)>pow(2,31)-1 && pow(a,31)<pow(2,-31)  )
	return 0;
	if(pow(b,31)>pow(2,31)-1 && pow(b,31)<pow(2,-31)  )
	return 0;
	if(b>a){
		int temp=a;
		a=b;
		b=temp;
	
	}
	
	do{
		rem=a%b;
		a=b;
		b=rem;
	}	while(rem!=0);
	
	return a;
}
int main(){
    cout<<gcd(18,24);

}


