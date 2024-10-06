#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    pair<int,int> ls[n];
    int current_passangers=0,max=0;
    for(int i=0;i<n;i++){
        cin>>ls[i].first>>ls[i].second;

            current_passangers = ls[i].second - ls[i].first + current_passangers;
            if( max<current_passangers){
                max=current_passangers;
            }
    }
    cout<<max;
return 0;
}