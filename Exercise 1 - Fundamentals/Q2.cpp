//
// Created by tsits on 20/01/2025.
//
/*2. Write an application that will ask a user for their age and output a message telling them
if they are a Child (under 18), Adult (18 or over) or a Senior Citizen (over 65). Use an if()
statement for this. Test your programme with a range of values. Record the test values
and the result of your program. */
#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
if (age>65) {
    cout<<"You are a Senior Citizen"<<endl;
} else if (age>=18) {
    cout<<"You are an Adult"<<endl;
} else {
    cout<<"You are a child";
}

    return 0;
}
