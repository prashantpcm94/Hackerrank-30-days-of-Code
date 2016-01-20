#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    getline(cin,s);
    int x=s.size();
    vector<string> g;
    char a[x]={0};
    int l=0,m=0;
    for(int i=0;i<x;i++){
        if(s[i]>='A'&&s[i]<='Z'){
            a[l++]=s[i];
        } else if(s[i]>='a'&& s[i]<='z'){
            a[l++]=s[i];
        } else if(s[i]==' '||s[i]=='!'||s[i]==','||s[i]=='?'||s[i]=='.'||s[i]=='\\'||s[i]=='_'||s[i]=='@'||s[i]=='\'') {
            if(a[0]!=0){
                g.push_back(a);
                memset(a,0,x);
                l=0;
                m++;
            }
        } 
    }
    if(a[0]!=0){
                g.push_back(a);
                memset(a,0,x);
                l=0;
                m++;
            }
    cout<<m<<endl;
    for (int i=0;i<m;i++){
        cout<<g[i]<<endl;
    }
}
