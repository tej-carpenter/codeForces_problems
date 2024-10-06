#include <bits/stdc++.h>
using namespace std;
int fun(){
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    if((arr[0]&&arr[1])||(arr[1]&&arr[2])||(arr[2]&&arr[0]))
        return 1;
    else
        return 0;
}

int main(){
    int n,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        count+=fun();
    }
    cout<<count;

   return 0; 
}