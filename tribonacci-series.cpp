#include<iostream>
using namespace std;
int trib(int n){
    if(n<=1)
    return 0;
    else if(n<=3)
    return 1;
    else
    return trib(n-3)+trib(n-2)+trib(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<trib(n);
    return 0;
}