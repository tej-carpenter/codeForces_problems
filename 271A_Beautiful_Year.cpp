#include <bits/stdc++.h>
using namespace std;

int main(){
    int year,year2;
    string s = to_string(year);
    cin>>year;
    year2=year;
    int f=0;
    while (true){
        year2++;
        s=to_string(year2);
        for(int i=0;i<4;i++){
            if((s[0]!=s[1])&&(s[0]!=s[2])&&(s[0]!=s[3])&&(s[1]!=s[2])&&(s[1]!=s[3])&&(s[2]!=s[3])){
                f=1;
                break;
            }
        }
        if(f==1){
            break;
        }
        // cout<<".";
    }
    cout<<year2;


    return 0;
}