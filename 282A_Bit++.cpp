#include <bits/stdc++.h>
using namespace std;
int fun(int x){
    string op;
    cin>>op;
    if(op=="++X" || op=="X++")
        return x+1;
    else if (op=="--X" || op=="X--")
        return x-1;
    else
    return x;
}

int main(){
    int n,x=0;
    cin>>n;
    for(int i=0;i<n;i++){
        x=fun(x);
    }
    cout<<x;

   return 0; 
}