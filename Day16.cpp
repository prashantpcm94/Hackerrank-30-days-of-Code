#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int x=a[1]-a[0];
    for(int i=2;i<n;i++){
        if((a[i]-a[i-1])<x){
            x=a[i]-a[i-1];
        } 
    }
    for(int i=1;i<n;i++){
        if((a[i]-a[i-1])==x){
            cout<<a[i-1]<<" "<<a[i]<<" ";
        } 
    }
    return 0;
}
