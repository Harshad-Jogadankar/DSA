#include<bits/stdc++.h>
using namespace std;
//brute force approach
vector<int> printDivisors(int n) {
    // Write your code here
    vector<int> div;
    
    for(int i=1;i<=n;i++){
        if(n%i==0)
            div.push_back(i);
    }
    return div;
}

//Optimal solution
vector<int> printDivisors(int n) {
    // Write your code here
    vector<int> div;
    
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            
            if(i==n/i)
            div.push_back(i);
            else{
                div.push_back(i);
                div.push_back(n/i);
            }

        }
    }
    sort(div.begin(),div.end());
    return div;
}
