#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    map<string,long long> p;
    string x;
    while(t--){
        long long h;
        std::getline(std::cin, x);
        std::getline(std::cin, x);
        cin>>h;
        p[x]=h;
    }
    std::string line;
    std::getline(std::cin, line);
    while (std::getline(std::cin, line))
    {
        if(p.find(line)==p.end()){
            cout<<"Not found\n";
        } else {
            std::cout << line << "=" <<p[line] << std::endl;
        }
    }
}
