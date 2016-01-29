#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        char a[10001],b[10001];
        cin>>a;
        int x=strlen(a);
        strcpy(b,a);
        reverse(b,b+x);
        bool done=true;
        for(int i=1;i<x;i++){
            if(abs(b[i]-b[i-1])!=abs(a[i]-a[i-1]))    {
                done=false;
            }
        }
        if(done){
            cout<<"Funny\n";
        } else {
            cout<<"Not Funny\n";
        }
    }
}
