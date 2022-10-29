#include<iostream>
using namespace std;
void fun(int arr[],int n){
    int f=0;
    for(int i=0;i<n;i++){
        if(arr[i]-arr[i+1]==1)
        swap(arr[i],arr[i+1]);
        if(arr[i]-arr[i+1]>1){
            cout<<"not possible"<<endl;
            f=1;
            break;
        }
    }
    if(f==0)
    cout<<"possible"<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    fun(arr,n);
    return 0;
}