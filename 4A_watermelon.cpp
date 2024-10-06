#include <iostream>
using namespace std;

int main(){
    int w,f=0;
    cin>>w;
    if(w%2==0 && w!=2){
        f=1;
    }
    if(f==1)
        cout<<"YES";
    else
        cout<<"NO";

   return 0; 
}