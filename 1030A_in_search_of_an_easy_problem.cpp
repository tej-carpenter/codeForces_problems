#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,f=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            f=1;
        }
    }

    if(f==1){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }

return 0;
}