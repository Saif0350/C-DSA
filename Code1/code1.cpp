//writes a program that takes an input as age and 
//print that you are adult or not.

#include<iostream>
#include<string>
using namespace std;

int main(){
    int age;
    cout << "Type your age: ";
    cin >>  age;
    cout << "You entered: " << age << endl;

    if (age >= 18){
        cout << "You are an adult" << endl;
    }else if (age < 18){
        cout << "You are not an adult" << endl;
    }
    else{
        cout << "Invalid input" << endl;
    }
    return 0;
}