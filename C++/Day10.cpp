#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
   int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        stack<int> x;
        while(t){
            x.push(t%2);
            t=t/2;
        }
        while(x.size()){
            int y=x.top();
            x.pop();
            cout<<y;
        }
        cout<<endl;
    }
}
