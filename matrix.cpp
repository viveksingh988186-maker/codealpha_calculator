#include <iostream>
#include <vector>
using namespace std;



int main(){
    int rows=3;
    int col=4;
    int matrix[rows][col];
    for (int i=0;i<rows;i++){
        for (int j=0;j<col;j++){
            cin>>matrix[i][j];
            //cout<<i<<j<<" ";
        }
    }
    int target=13;
    //cout<<search(matrix,rows,col,c)<<endl;
    //for (int i=0;i<rows;i++){
     //   for (int j=0;j<col;j++){
       //     cout<<matrix[i][j]<<" ";
            //cout<<i<<j<<" ";
        //}
       // cout<<endl;
    //}
    bool found=false;
    for (int i=0;i<rows;i++){
        for (int j=0;j<col;j++){
            if (matrix[i][j]==target){
                found=true;
            }
            //cout<<i<<j<<" ";
        }
    }
    if(found){
        cout<<true<<endl;
    }
    else {
        cout<<false<<endl;
    }
    

}