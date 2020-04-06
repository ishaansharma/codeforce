//
//  2_inSearchOfAnEasyProblem.cpp
//  competitive_programming
//
//  Created by The Times of Hacker on 05/04/20.
//  Copyright © 2020 isharma. All rights reserved.
//

#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int n;
    int temp[101];
    cin >> n;
    bool flag = true;
    for (int i = 0; i<n; i++){
            cin>>temp[i];
            if(temp[i]){
                flag=false;
        }
    }
    if(flag){
        cout<<"EASY";
    }
    else{
        cout<<"HARD";
    }
    return 0;
}
