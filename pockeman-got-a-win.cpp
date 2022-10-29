//given the n no of pockemons and m amount of money and evolution prize(cost prize)and selling bonous.find
// the max no of pokemons that you can evolve(buy/have).
// time constrains 10^18 which says o(n) doesnt works.
#include<iostream>
using namespace std;
int fun(int n,int m,int ep,int sb){
    int l=0,r=n,mid=0;
    while(l<r){
        mid=(l+r)/2;
        int ts=(n-mid)*sb;
        int te=mid*ep;
        if(m+ts-te>0)
        l=mid+1;
        else
        r=mid-1;
    }
    return mid;
}
int main(){
    int n,m,ep,sb;
    cout<<"enter the no of pokemons :";
    cin>>n;
    cout<<"enter the amount I have :";
    cin>>m;
    cout<<"enter the evolution prize for 1 pokemon :";
    cin>>ep;
    cout<<"enter the selling bonous for 1 pokemon : ";
    cin>>sb;
    cout<<fun(n,m,ep,sb)<<" are the max no of pokemons that I can evolve ";
    return 0;
}