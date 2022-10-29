4*4 chess board
#include<iostream>
using namespace std;
void pnq(int arr[][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
bool safe(int arr[][4],int row,int col){
    for(int i=0;i<4;i++)
    if(arr[row][i])
    return false;
    for(int i=row,j=col;i>=0 && j>=0;i--,j--){
        if(arr[i][j])
        return false;
    }
    for(int i=row,j=col;i<4 && j>=0;i++,j--){
        if(arr[i][j])
        return false;
    }
    return true;
}
bool solve(int arr[][4],int col){
    if(col>=4)
    return true;
    for(int i=0;i<4;i++){
        if(safe(arr,i,col)){
            arr[i][col]=1;
            if(solve(arr,col+1))
            return true;
            arr[i][col]=0;
        }
    }
    return false;
}
int main(){
    int arr[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    if(solve(arr,0))
    pnq(arr);
    else
    cout<<"not possible";
    return 0;
}