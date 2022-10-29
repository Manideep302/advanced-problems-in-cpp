#include<iostream>
using namespace std;
double fun(int n,int p){
    if(p==0)
    return 1;
    else
    return n*fun(n,p-1);
}
int main(){
    int a,p;
    cin>>a;
    cin>>p;
    if(p>0)
    cout<<fun(a,p);
    else
    cout<<1/fun(a,-p);
    return 0;
}