#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    deque <char> dq;
    dq.push_front(s[0]);
    for(int i=1; i<s.size(); ++i){
        if(s[i]!=dq.front()){
            dq.push_front(s[i]);
        }
        else if(s[i]==dq.front()){
            dq.pop_front();
        } 
    }
    if(dq.empty()){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}