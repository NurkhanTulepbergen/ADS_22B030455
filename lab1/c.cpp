#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int a=0,b=0,d=0,e=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            d++;
        }
        if (s[i]=='#'){
            a++;
        }
    }
    for( int i=0; i<t.size(); i++){
        if(t[i]>='a' && t[i]<='z'){
            e++;
        }
        if (t[i]=='#'){
            b++;
        }
    }

    if((d-a)==(e-b)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
   
}