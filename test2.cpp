#include <iostream>
#include <string>
using namespace std;
string convert(string time);
int main() {
string Time;
cout<<"Enter the time in this format('12:00:00AM'):" <<endl;
cin>>Time;
cout<<"The time is "<<convert(Time)<<" in military format"<<endl;
}
string convert(string time) {
    for(int i=0;i<time.length();i++) {
        if(time[8]=='P' || time[7]=='P') {
            if(time.length()==10) {
                char x = time[1];
                int num = num - '0';
                num+=12;
                string time = to_string(num);
                return time;
            }
            return time;
        }
        else {
        return time;
        }
    }
    return time;
}