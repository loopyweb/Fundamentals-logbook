#include <iostream>
using namespace std;
    //sorts in ascending order
    void selectionSort(int a[],int n) {
        for (int i=n-1;i >=0; i--){
            int max=i;//assume last element is maximum

            //find maximum
            for (int j=0; j<i; j++)
            if(a[j]>= a[max])
            max=j;

            //swap maximum with last element of unsorted region
            swap(a[i],a[max]);
        }
    }

int main(){
int arr[]={9,5,4,3,1};

int n=sizeof(arr)/sizeof(arr[0]);//calculate number of elements

selectionSort(arr,n);

//print sorted array
for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
cout<<endl;

return 0;
}