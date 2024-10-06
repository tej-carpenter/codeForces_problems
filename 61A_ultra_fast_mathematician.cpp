#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2,res;
    cin>>s1>>s2;
    int n=s1.size();
    for(int i=0;i<n;i++){
        res+=to_string(int(s1[i]) ^ int(s2[i]));
    }
    cout<<res;

return 0;
}