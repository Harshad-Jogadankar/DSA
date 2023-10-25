#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
 using namespace std;

void extraction_digits(int number){
    int rem=0;
    while(number>0){
        rem=number%10;
        cout<<rem<<endl;
        number=number/10;

    }
}
void counting_digits(int number){
    int count=0,rem=0;
    while(number>0){
        rem=number%10;
        count++;
        number=number/10;

    }
    cout<<count;
}
int reverse(int num){
    int r=0,rev=0;
    while(num>0){
        rev=rev*10+num%10;
        num=num/10;
    }
    return rev;
}

int main(){
    extraction_digits(229);
    counting_digits(229);
    cout<<endl<<reverse(2353);
}