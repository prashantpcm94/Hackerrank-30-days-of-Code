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
        long long a,b,N;
        cin>>a>>b>>N;
        for(int i=0;i<N;i++){
            a=a+pow(2,i)*b;
            cout<<a<<" ";
        }
        cout<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
