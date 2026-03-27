#include <iostream>
using namespace std;

void bubbleSort(int a[],int n){
    for(int i=n-1; i>=0; i--){
        for(int j=1; j<=i; j++){
            
            //swap if left is greater than right
            if (a[j-1]>a[j])
            swap(a[j], a[j-1]);
        }
    }
}

int main() {
    int arr[]={8,4,2,0,7};
    int n=sizeof(arr)/sizeof(arr[0]); //number of elements

    bubbleSort(arr,n);

    //print sorted array
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}