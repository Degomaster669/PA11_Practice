#include <iostream>
using namespace std;
bool isUnique(string sentence);
int main()
{
    cout<<isUnique("cat")<<endl;//1
    cout<<isUnique("He likes NIC")<<endl;//0 Why? e
    cout<<isUnique("school is difficult")<<endl;//0
    cout<<isUnique("   i like nic   ")<<endl;//0
    cout<<isUnique("   abcdefg   ")<<endl;//1
}
bool isUnique(string sentence) {
    return false;
}