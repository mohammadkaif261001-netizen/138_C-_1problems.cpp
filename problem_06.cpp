#include<iostream>
using namespace std;
int main(){
    int num1, num2, temp;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"After swaping: "<<endl;
    cout<<"num1: "<<num1<<endl;
    cout<<"num2: "<<num2;
    return 0;
}