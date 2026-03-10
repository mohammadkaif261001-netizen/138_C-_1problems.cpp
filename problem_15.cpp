#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the year: ";
    cin>>num;
    if((num%400==0)|| (num%4==0 && num%100!=0)){
        cout<<"This year is a leap year.";
    }
    else{
        cout<<"This year is not a leap year.";
    }
    return 0;
}