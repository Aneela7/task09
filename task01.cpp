#include<iostream>
using namespace std;
int main(){
    int arr[4][4];
    arr[0][0]=50;
    arr[0][1]=51;
    arr[0][2]=52;
    arr[0][3]=53;
    arr[1][0]=54;
    arr[1][1]=55;
    arr[1][2]=56;
     arr[1][3]=57;
    arr[2][0]=58;
    arr[2][1]=59;
    arr[2][2]=60;
    arr[2][3]=61;
    arr[3][0]=62;
    arr[3][1]=63;
    arr[3][2]=64;
    arr[3][3]=65;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j=4;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
    
}