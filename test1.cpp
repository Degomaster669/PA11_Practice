#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string Word);
int main() {
string word;
cout<<"Enter a word: ";
cin>>word;
if (isPalindrome(word) == 1) {
    cout<<word<<" is a palindrome"<<endl;
}
else{
    cout<<word<<" is not a palindrome"<<endl;
}
}
bool isPalindrome(string Word) {
    int length = Word.length();
    for (int i = 0; i < length / 2; i++) {
        if (Word[i] != Word[length - 1 - i]) {
            return false;
        }
    }
    return true;
}