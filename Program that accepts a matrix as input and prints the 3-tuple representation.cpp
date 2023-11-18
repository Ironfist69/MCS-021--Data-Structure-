#include<iostream>
using namespace std;
int main () {
    int matrix[10][10], row, col, i, j;
    cout<<"Enter no. of rows: "<<endl;
    cin>>row;
    cout<<"Enter no. of cols: "<<endl;
    cin>>col;
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            cin>>matrix[i][j];
        }
    }
    cout<<"3-Tuple representation:"<<endl;
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            if(matrix[i][j]!=0) {
                cout<<i+1<<j+1<<matrix[i][j]<<endl;
            }
        }
    }
    system("pause");
    return 0;
}