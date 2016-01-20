#include<bits/stdc++.h>
using namespace std;
class Palindrome {
    stack <char> s;
    queue <char> q;
    public :
    void pushCharacter(char ch){
        s.push(ch);
    }
    void enqueueCharacter(char ch){
        q.push(ch);
    }
    char popCharacter(){
        char c=s.top();
        s.pop();
        return c;
    }
    char dequeueCharacter(){
        char c = q.front();
        q.pop();
        return c;
    }
};
