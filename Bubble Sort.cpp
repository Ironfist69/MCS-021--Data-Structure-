//Write Pseudo code for Bubble Sort
//Algorithm. Sort the following list using
//bubble sort in ascending order :
//35, 39, 10, 8, 78, 92, 20, 50

#include<iostream>
using namespace std;

void bubbleSort(int arr[]) {
    for(int steps=0;steps<8;++steps){
        for(int i=0;i<8-steps;++i){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
void print(int arr[]){
    for(int i=0;i<8;++i) {
        cout<<" "<<arr[i];
    }
    cout<<"\n";
}

int main () {
    int arr[]={35,39,10,8,78,92,20,50};
    bubbleSort(arr);
    print(arr);
    system("pause");
    return 0;
}