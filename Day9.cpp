#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int find_gcd(int a,int b){
    if(a%b==0){
        return b;
    }
    return find_gcd(b,a%b);
}
int main() {
    int a,b;
    cin>>a>>b;
    int gcd=find_gcd(a,b);
    cout<<gcd;
    return 0;   
}
