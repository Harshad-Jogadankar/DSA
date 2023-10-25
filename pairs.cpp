#include<iostream>
#include<string.h>
#include<stdio.h>


using namespace std;


 int main(){
    pair<string,string> team={"Dog","cat"};
    cout<<team.first<<" "<<team.second;
    pair<int,pair<int,string>> ar={1,{20,"Harsh"}};
    cout<<ar.first<<" "<<ar.second.first<<" is age and name is "<<ar.second.second;
    pair<int,int> arr[]={{2,2},{3,3}};
    for(int i=0;i<2;i++){
      cout<<i+1<<" element is "<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    return 0;
 }