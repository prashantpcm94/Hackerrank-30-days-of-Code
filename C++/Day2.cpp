#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double a,b,c,d;
    cin>>a>>b>>c;
    c=b+c;
    c=c*a;
    c=c/100;
    a=a+c;
    long long s,t;
    s=a;
    t=a+1;
    d=a-s;
    if(d>0.5){
        cout<<"The final price of the meal is $"<<t<<".\n";
    } else {
        cout<<"The final price of the meal is $"<<s<<".\n";
    }
    return 0;
}
