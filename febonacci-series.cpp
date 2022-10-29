#include<iostream>
using namespace std;
int feb(int n){
    if(n<=1)
    return n;
    else
    return feb(n-1)+feb(n-2);
}
int main(){
    int a;
    cout<<"enter the position of the element to be found in fibonacci-series: ";
    cin>>a;
    cout<<feb(a);
    return 0;
}