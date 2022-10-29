#include<iostream>
using namespace std;
// using memoization
int feb1(int n,int *arr){
    if(arr[n]!=0)
    return arr[n];
    if(n==0 ||n==1){
        return 1;
    }
    int o=feb1(n-1,arr)+feb1(n-2,arr);
    arr[n]=o;
    return arr[n];
}
// using tabulation
int ci=2;//current index up to which array has elements
int feb2(int n,int *arr){
    arr[0]=1;
    arr[1]=1;
    if(arr[n]!=0)
    return arr[n];
    for(ci;ci<=n;ci++)
    arr[ci]=arr[ci-1]+arr[ci-2];
    return arr[n];
}
int main(){
    int arr1[100];
    for(int i=0;i<100;i++)
    arr1[i]=0;
    int n;
    cout<<"enter the number <100:";
    cin>>n;
    cout<<feb1(n,arr1)<<" using method 1"<<endl;
    int arr2[100];
    for(int i=0;i<100;i++)
    arr2[i]=0;
    cout<<feb2(n,arr2)<<" using method 2";
    return 0;
}