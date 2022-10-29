#include<iostream>
using namespace std;
void print(int arr[][7]){
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
bool valid(int arr[][7],int r,int col){
    if(r<0 || col<0 ||r>6 ||col>6)
    return false;
    if(arr[r][col]==0)
    return true;
    else
    return false;
}
int count=0;
bool stp1(int arr[][7],int r,int col){
    // cout<<count<<" ";
    if(count>=49)
    return true;
    if(valid(arr,r,col)){
         count=count+1;
        arr[r][col]=count;
        if(stp1(arr,r-1,col+2))
        return true;
        if(stp1(arr,r+1,col+2))
        return true;
        if(stp1(arr,r-1,col-2))
        return true;
        if(stp1(arr,r+1,col-2))
        return true;
        if(stp1(arr,r-2,col-1))
        return true;
        if(stp1(arr,r+2,col-1))
        return true;
        if(stp1(arr,r-2,col+1))
        return true;
        if(stp1(arr,r+2,col+1))
        return true;
        arr[r][col]=0;
        count=count-1;
        return false;
    }
    return false;
}
int main(){
    int arr[7][7];
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++)
        arr[i][j]=0;
    }
    if(stp1(arr,0,0))
    print(arr);
    else
    cout<<"its not possible ";
    return 0;
}