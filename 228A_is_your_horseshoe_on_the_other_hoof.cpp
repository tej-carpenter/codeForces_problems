#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[4],count=0;
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if((i!=j)&&(arr[i]==arr[j])){
                count++;
            }
        }
    }
    cout<<count;

return 0;
}