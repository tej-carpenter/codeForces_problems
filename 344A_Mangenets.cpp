#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=1;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i>0 && arr[i]!=arr[i-1]){
            count++;
        }
    }
    cout<<count;


return 0;
}