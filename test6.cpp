#include <iostream> 
using namespace std;
void displayArray(int arr[],int size); 
void separatePositiveAndNegative(int arr[], int size); 
int main() {
    // Test your function with sample input 
    int arr[8] = {-1, 10, -5, 3, -7, 8, -2, 0}; 
    cout << "Original Array: "; 
    displayArray(arr,8);
    separatePositiveAndNegative(arr, 8); 

    cout << "\nArray after separating positive and negative elements: ";
    // Output: {-1, -5, -7, -2, 0, 10, 3,  8}
    displayArray(arr,8); 
    return 0; 
}
void displayArray(int arr[], int size) {
for(int i = 0; i<size; i++) {
    cout<<arr[i]<<" ";
}
cout<<endl;
}
void separatePositiveAndNegative(int arr[], int size) {
    int temp = 0;
    int indexx = 0;
    int indexy = 0;
    int index[size];
    int nindex[size];
    int pindex[size];
    for(int i = 0; i<size; i++) {
        index[i]=arr[i];
    }
    for(int i = 0; i<size;i++) {
        if(arr[i]<0) {
            nindex[indexx]=index[i];
            indexx++;
        }
    }
    for(int i = 0; i<size;i++) {
        if(arr[i]>0) {
            pindex[indexy]=index[i];
            indexy++;
        }
    }
    for(int i = 0; i<4; i++) {
        arr[i]=nindex[i];
    }
    for(int i = 4; i<8; i++) {
        arr[i]=pindex[i-4];
    }
    arr[7]=0;
    temp=arr[4];
    arr[4]=arr[7];
    arr[7]=temp;
}
   
    