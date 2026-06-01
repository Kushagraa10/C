#include<stdio.h>

void printArray(int*A,int n){
    for(i=0;i<n-1;i++)
    { 
        printf("%d",A[i]);
    }
}

void bubbleSort(int*A,int n){
    int temp;
    int isSorted=0;
    for(i=0;i<n-1;i++)
    {
        isSorted=1;
        for (int j =0; j<n-1-i;j++){
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted=0;
            }
        }
    }
}

int main(){
    int i;
    int A[]={12,23,11,44,45,1};
    int n = 6;
    printArray(A,n); // printing before sorting
    bubbleSort(A,n); // sorting the funtion.
    printArray(A,n); // printing after sorting
    return 0;
}