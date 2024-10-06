#include <bits/stdc++.h>
using namespace std;
void fun(){
    string s;
    cin>>s;
    int len = s.length()-2;
    if(len>8)
        cout<<s[0]<<len<<s[len+1]<<endl;
    else
    cout<<s<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        fun();
    }

   return 0; 
}