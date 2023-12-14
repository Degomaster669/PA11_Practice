#include <iostream>
using namespace std;
void displayTopFive(int arr[], int size);
int main()
{
    int size = 32;
    int students[size]={12,34,12,34,56,45,32,67,45,23,19,23,45,23,67,58,78,98,13,45,45,34,89,97,65,45,34,26,57,67,87,65};
    for (int count = 0; count<5; count++) {
    displayTopFive(students,size);
    }
    cout<<endl;
}
void displayTopFive(int arr[], int size) {
    int max = 0;
    int num = 0;
    for(int i = 0;i<size;i++) {
        if (arr[i]>max) {
            max=arr[i];
            num = i;
        }
    }
    arr[num]={0};
    cout<<max<<" ";
}