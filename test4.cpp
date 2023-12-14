#include <iostream>
#include <cmath>
using namespace std;
const int size = 3;
int absoluteDifference(int array[][size]);
int main() {
int square[][size]={1,2,3,4,5,6,7,8,9};
cout<<absoluteDifference(square);
cout<<endl;
}
int absoluteDifference(int array[][size]) {\
int diagnal1=0;
int diagnal2=0;
int x=size-1;
int y=size-1;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i == j) {
                diagnal1+=array[i][j];
            }
            if ((i + x) == (j)) {
                diagnal2+=array[i][j];
            }
            if ((i) == (j+y)) {
                diagnal2+=array[i][j];
            }
            if((i==x-1 && j==y-1)) {
                diagnal2+=array[i][j];
            }
        }
    }
    return abs(diagnal1-diagnal2);
}