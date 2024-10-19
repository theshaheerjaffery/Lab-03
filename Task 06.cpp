#include <iostream>
using namespace std;
int main() {

int num;
cout<<"Enter an Integer Number"<<endl;
cin>>num;

string result;
result=(num%2==0)? "Even" : "Odd";
cout<<"The Integer Number is "<<result;

    return 0;
}