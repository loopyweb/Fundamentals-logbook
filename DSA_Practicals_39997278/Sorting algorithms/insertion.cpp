#include <iostream>
using namespace std;

void insertionSort(int a[],int n) {
    for (int i=1; i<n; i++) {
        int next=a[i];//store the element to be inserted
        int j;

        //shift elements in sorted rehion which are greater than the next
        for (j=i-1; j>=0 && a[j]>next; j--)
        a[j+1]=a[j];

        a[j+1]=next;
    }
}

int main() {
    int arr[]={33,75,46,58,2};
    int n= sizeof(arr)/sizeof(arr[0]);//number of elements

    insertionSort(arr,n);

    //print sorted array
    for (int i=0; i<n; i++)
        cout<<arr[i]<<" "; 
        cout<<endl;
}