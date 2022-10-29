// strictly asked to use recursion
#include<iostream>
using namespace std;
int fun(int *arr,int n,int i,int tar){
    if(i>=n)
    return -1;
    if(arr[i]==tar)
    return i;
    else
    return fun(arr,n,i+1,tar);
}
int main(){
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    int target;
    cout<<"enter the target element : ";
    cin>>target;
    int arr[n];
    cout<<"enter elements of the array : "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<< fun(arr,n,0,target)<<" is the position of first occurance ";
    return 0;
}