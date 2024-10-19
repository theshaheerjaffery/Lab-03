#include <iostream>
using namespace std;
int main() {
    
    int num1;
    int num2;
    cout<<"Enter two integers"<<endl;
    cin>>num1;
    cin>>num2;

    cout<<"Integer 1 == Integer 2 is: "<<(num1==num2)<<endl;
    cout<<"Integer 1 != Integer 2 is: "<<(num1!=num2)<<endl;
    cout<<"Integer 1 > Integer 2 is: "<<(num1>num2)<<endl;
    cout<<"Integer 1 < Integer 2 is: "<<(num1<num2)<<endl;
    cout<<"Integer 1 >= Integer 2 is: "<<(num1>=num2)<<endl;
    cout<<"Integer 1 <= Integer 2 is: "<<(num1<=num2);
    
    return 0;
}