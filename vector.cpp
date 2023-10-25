#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;//no need to say size
    v1.push_back(1);
    cout<<v1[0];

    v1.emplace_back(2);
    cout<<v1[1];

    vector<pair<int,int>>se;
    se.push_back({1,2});//For pushback need to use curly braces or it wont take it as a pair

    se.emplace_back(3,4);//no need curly braces for emplace back

    cout<<se[1].first;

    vector<int> v1(2);//in the bracket is the length of the vector it can be increased dynamically
    v1.push_back(2);

    vector<int> v2(5,2);
    
}