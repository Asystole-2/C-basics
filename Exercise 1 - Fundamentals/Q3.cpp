//
// Created by tsits on 21/01/2025.
/*Write an application that implements a menu system to run the previous questions.
This should use a switch statement to handle users’ choice of question. */

#include <iostream>
#include <string>

using namespace std;
int main() {
    string FirstName, LastName;

    int choice(-1);

    cout<<"Menu options:\n1.Question 1\n2.Question 2\n3.Quit""\n Enter Choice\n ";
    cin>>choice;

    do {
        switch(choice) {
            case 1:
                cout<<"Enter your first and lastname"<<endl;
            cin>>FirstName;
            cin>>LastName;
            cout<<LastName<<", "<<FirstName;
            break;
            case 2:
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
            break;
        }
        cout<<"\nMenu options:\n1.Question 1\n2.Question 2\n3.Quit""\n Enter Choice\n ";
        cin>>choice;
    }
    while(choice != 3);

    return 0;

}
