//
//  wrongSubstraction.cpp
//  competitive_programming
//  977A - Wrong Subtraction
//  https://codeforces.com/problemset/problem/977/A
//  Created by Ishaan Sharma on 05/04/20.
//

#include <iostream>
using namespace std;
int main(){
    int i,n,k;
    cin >>n>>k;
    for(i=0;i<k;i++){
        if(n%10==0){
            n/=10;
        }
        else{
            n--;
        }
    }
    cout<<n;
};
