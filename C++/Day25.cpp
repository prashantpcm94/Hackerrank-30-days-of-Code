#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool done=false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                done=true;
                break;
            }
        }
        if(done||n==1){
            cout<<"Not prime\n";
        } else {
            cout<<"Prime\n";
        }
    }
}
