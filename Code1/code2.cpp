
/*A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - F
d. 50 to 59 - F
e. 60 to 79 - F
f. 80 to 100 - F
Ask user to enter marks and print the corresponding grade.
*/


#include <iostream>
#include <string>
using namespace std;

int main(){
int marks;
cout << "Enter your marks: ";  
cin >> marks;

if(marks < 25){
    cout << "Your grade is F";
}
else if(marks >= 25 && marks <= 44){
    cout << "Your grade is E";
}
else if(marks >= 45 && marks <= 49){
    cout << "Your grade is D";
}
else if(marks >= 50 && marks <= 59){
    cout << "Your grade is C";
}
else if(marks >= 60 && marks <= 79){
    cout << "Your grade is B";
}
else if(marks >= 80 && marks <= 100){
    cout << "Your grade is A";
}
else{
    cout << "Invalid marks";
}
    return 0;
}